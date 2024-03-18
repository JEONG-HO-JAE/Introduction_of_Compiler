#include <stdio.h>
#include <stdlib.h>

#define NUMBER 256
#define PLUS 257
#define STAR 258
#define LPAREN 259
#define RPAREN 260
#define END 261
#define EXPRESSION 0
#define TERM 1
#define FACTOR 2
#define INTEGER 3
#define FLOAT 4
#define ACC 999

int action[12][6] = {
	{5,0,0,4,0,0},{0,6,0,0,0,ACC},{0,-2,7,0,-2,-2},
	{0,-4,-4,0,-4,-4},{5,0,0,4,0,0},{0,-6,-6,0,-6,-6},
	{5,0,0,4,0,0},{5,0,0,4,0,0},{0,6,0,0,11,0},
	{0,-1,7,0,-1,-1},{0,-3,-3,0,-3,-3},{0,-5,-5,0,-5,-5}
};
int go_to[12][3] = {
	{1,2,3},{0,0,0},{0,0,0},{0,0,0},{8,2,3},{0,0,0},
	{0,9,3},{0,0,10},{0,0,0},{0,0,0},{0,0,0},{0,0,0}
};

typedef struct {
    int valueType; 
    union {
        int intValue;
        float floatValue;
    } Value;
} Token;

int prod_left[7] = { 0,EXPRESSION,EXPRESSION,TERM,TERM,FACTOR,FACTOR };
int prod_length[7] = { 0,3,1,3,1,3,1 };
int stack[1000]; 
Token value[1000];  
int top = -1; int sym; Token yylval;

void yyparse();
void push(int);
void shift(int);
void reduce(int);
Token add(Token, Token);
Token multiple(Token, Token);
void yyerror(int);
int yylex();

int main(void) {
    printf("Enter an arithmetic expression: ");
	yyparse();
	return 0;
}

void yyparse() {
	int i;
	stack[++top] = 0; // First step of stacking '0' 
	sym = yylex();

	do {
		i = action[stack[top]][sym - 256];
		if (i == ACC) {
			if (value[top].valueType == INTEGER) {
				printf("Result of Calculation: %d\n", value[top].Value.intValue);
			} else if (value[top].valueType == FLOAT) {
				printf("Result of Calculation: %f\n", value[top].Value.floatValue);
			}
		}
		else if (i > 0) shift(i);
		else if (i < 0) reduce(-i);
		else yyerror(0);
	} while (i != ACC);
}

void push(int i) {
	stack[++top] = i;
}

void shift(int i) {
	push(i);
	value[top] = yylval;
	sym = yylex();
}

void reduce(int i) {
	int old_top;
	top -= prod_length[i];
	old_top = top;
	push(go_to[stack[old_top]][prod_left[i]]);
	switch (i) {
		case 1: value[top] = add(value[old_top + 1], value[old_top + 3]); break;
		case 2: value[top] = value[old_top + 1]; break;
		case 3: value[top] = multiple(value[old_top + 1], value[old_top + 3]); break;
		case 4: value[top] = value[old_top + 1]; break;
		case 5: value[top] = value[old_top + 2]; break;
		case 6: value[top] = value[old_top + 1]; break;
		default: yyerror(2); break;
	}
}

Token add(Token token1, Token token2) {
	Token temp;

	if(token1.valueType == INTEGER && token2.valueType == INTEGER) {
        temp.Value.intValue = token1.Value.intValue + token2.Value.intValue;
        temp.valueType = INTEGER;
    }
    else if (token1.valueType == INTEGER && token2.valueType == FLOAT) {
        temp.Value.floatValue = token1.Value.intValue + token2.Value.floatValue;
        temp.valueType = FLOAT;
    }
    else if (token1.valueType == FLOAT && token2.valueType == INTEGER) {
        temp.Value.floatValue = token1.Value.floatValue + token2.Value.intValue;
        temp.valueType = FLOAT;
    }
    else {
        temp.Value.floatValue = token1.Value.floatValue + token2.Value.floatValue;
        temp.valueType = FLOAT;
    }
	return temp;
}

Token multiple(Token token1, Token token2) {
	Token temp;

	if(token1.valueType == INTEGER && token2.valueType == INTEGER) {
		temp.Value.intValue = token1.Value.intValue * token2.Value.intValue;
        temp.valueType = INTEGER;
    }
    else if (token1.valueType == INTEGER && token2.valueType == FLOAT) {
        temp.Value.floatValue = token1.Value.intValue * token2.Value.floatValue;
        temp.valueType = FLOAT;
    }
    else if (token1.valueType == FLOAT && token2.valueType == INTEGER) {
        temp.Value.floatValue = token1.Value.floatValue * token2.Value.intValue;
        temp.valueType = FLOAT;
    }
    else {
        temp.Value.floatValue = token1.Value.floatValue * token2.Value.floatValue;
        temp.valueType = FLOAT;
    }
	return temp;
}

void yyerror(int i) {
    switch (i) {
        case 0: printf("Syntax Error\n"); break;
        case 1: printf("Token Error : Only digits, (, ), *, + are allowed\n"); break;
        case 2: printf("Reduction Error\n"); break;
    }
    exit(1);
}

int yylex() {
	static char ch = ' ';

	int intValue = 0;
    float floatValue = 0.0;

	while (ch == ' ' || ch == '\t' ) ch = getchar();

	if ((ch >= '0') && (ch <= '9')) {
        do {
            intValue = intValue * 10 + ch - '0';
            ch = getchar();
        } while ((ch >= '0') && (ch <= '9'));
		yylval.valueType = INTEGER;
        
        if (ch == '.') {
            yylval.valueType = FLOAT; 
            ch = getchar(); // jump '.' char
            float fraction = 0.1;

            while ((ch >= '0') && (ch <= '9')) {
                floatValue += (ch - '0') * fraction;
                fraction *= 0.1; 
                ch = getchar();
            }
            yylval.Value.floatValue = intValue + floatValue; return (NUMBER);
        } else {
            yylval.Value.intValue = intValue; return (NUMBER);
        }
    }
	else if (ch == '+') { ch = getchar(); return (PLUS); }
	else if (ch == '*') { ch = getchar(); return (STAR); }
	else if (ch == '(') { ch = getchar(); return (LPAREN); }
	else if (ch == ')') { ch = getchar(); return (RPAREN); }
	else if (ch == '\n') { return (END); }
	else yyerror(1);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {NULL_VAL, INTEGER, FLOAT} ValueType;
typedef enum {NUMBER, PLUS, MINUS, STAR, DIVISION, LP, RP, END} TokenType;

typedef struct {
    TokenType tokenType;
    ValueType valueType; 
    union {
        int intValue;
        float floatValue;
    } Value;
} Token;

Token token;
char curChar;

Token expression();
Token term();
Token factor();
void get_token();
void error(int);

Token expression() {
    Token token_from_term_1 = term();
    
    while (token.tokenType == PLUS || token.tokenType == MINUS) {
        TokenType op = token.tokenType; 
        get_token();
        Token token_from_term_2 = term(); 

        if (op == PLUS) {
            if(token_from_term_1.valueType == INTEGER && token_from_term_2.valueType == INTEGER) {
                token_from_term_1.Value.intValue = token_from_term_1.Value.intValue + token_from_term_2.Value.intValue;
                token_from_term_1.valueType = INTEGER;
            }
            else if (token_from_term_1.valueType == INTEGER && token_from_term_2.valueType == FLOAT) {
                token_from_term_1.Value.floatValue = token_from_term_1.Value.intValue + token_from_term_2.Value.floatValue;
                token_from_term_1.valueType = FLOAT;
            }
            else if (token_from_term_1.valueType == FLOAT && token_from_term_2.valueType == INTEGER) {
                token_from_term_1.Value.floatValue = token_from_term_1.Value.floatValue + token_from_term_2.Value.intValue;
                token_from_term_1.valueType = FLOAT;
            }
            else {
                token_from_term_1.Value.floatValue = token_from_term_1.Value.floatValue + token_from_term_2.Value.floatValue;
                token_from_term_1.valueType = FLOAT;
            } 
        } else {
            if(token_from_term_1.valueType == INTEGER && token_from_term_2.valueType == INTEGER) {
                token_from_term_1.Value.intValue = token_from_term_1.Value.intValue - token_from_term_2.Value.intValue;
                token_from_term_1.valueType = INTEGER;
            }
            else if (token_from_term_1.valueType == INTEGER && token_from_term_2.valueType == FLOAT) {
                token_from_term_1.Value.floatValue = token_from_term_1.Value.intValue - token_from_term_2.Value.floatValue;
                token_from_term_1.valueType = FLOAT;
            }
            else if (token_from_term_1.valueType == FLOAT && token_from_term_2.valueType == INTEGER) {
                token_from_term_1.Value.floatValue = token_from_term_1.Value.floatValue - token_from_term_2.Value.intValue;
                token_from_term_1.valueType = FLOAT;
            }
            else {
                token_from_term_1.Value.floatValue = token_from_term_1.Value.floatValue - token_from_term_2.Value.floatValue;
                token_from_term_1.valueType = FLOAT;
            }
        }
    }
    return token_from_term_1;
}

Token term() {
    Token token_from_factor_1 = factor();
    while (token.tokenType == STAR || token.tokenType == DIVISION) {
        TokenType op = token.tokenType;
        get_token();
        Token token_from_factor_2 = factor();
        if (op == STAR) {
            if (token_from_factor_1.valueType == INTEGER && token_from_factor_2.valueType == INTEGER) {
            token_from_factor_1.Value.intValue = token_from_factor_1.Value.intValue * token_from_factor_2.Value.intValue;
            token_from_factor_1.valueType = INTEGER;
            }
            else if (token_from_factor_1.valueType == INTEGER && token_from_factor_2.valueType == FLOAT) {
                token_from_factor_1.Value.floatValue = token_from_factor_1.Value.intValue * token_from_factor_2.Value.floatValue;
                token_from_factor_1.valueType = FLOAT;
            }
            else if (token_from_factor_1.valueType == FLOAT && token_from_factor_2.valueType == INTEGER) {
                token_from_factor_1.Value.floatValue = token_from_factor_1.Value.floatValue * token_from_factor_2.Value.intValue;
                token_from_factor_2.valueType = FLOAT;
            }
            else {
                token_from_factor_1.Value.floatValue = token_from_factor_1.Value.floatValue * token_from_factor_2.Value.floatValue;
                token_from_factor_2.valueType = FLOAT;
            }
        } else {
            if (token_from_factor_2.valueType == 0) {
                error(5);
            }
            if(token_from_factor_1.valueType == INTEGER && token_from_factor_2.valueType == INTEGER) {
                token_from_factor_1.Value.intValue = token_from_factor_1.Value.intValue / token_from_factor_2.Value.intValue;
                token_from_factor_1.valueType = INTEGER;
            }
            else if (token_from_factor_1.valueType == INTEGER && token_from_factor_2.valueType == FLOAT) {
                token_from_factor_1.Value.floatValue = token_from_factor_1.Value.intValue / token_from_factor_2.Value.floatValue;
                token_from_factor_1.valueType = FLOAT;
            }
            else if (token_from_factor_1.valueType == FLOAT && token_from_factor_2.valueType == INTEGER) {
                token_from_factor_1.Value.floatValue = token_from_factor_1.Value.floatValue / token_from_factor_2.Value.intValue;
                token_from_factor_1.valueType = FLOAT;
            }
            else {
                token_from_factor_1.Value.floatValue = token_from_factor_1.Value.floatValue / token_from_factor_2.Value.floatValue;
                token_from_factor_2.valueType = FLOAT;
            }
        }
    }
    return token_from_factor_1;
}

Token factor() {
    Token result;
    if (token.tokenType == NUMBER) {
        result = token;
        // if (token.valueType==INTEGER)
        //     printf("%d", result.Value.intValue);
        // else printf("%lf", result.Value.floatValue);
        get_token();
        if (token.tokenType == LP) error(4);
    }
    else if (token.tokenType == LP) {
        get_token();
        result = expression();
        if (token.tokenType == RP) get_token();
        else error(2);
    }else error(1);
    return result;
}

void get_token() {
    int intValue = 0;
    float floatValue = 0.0;

    while ((curChar == ' ') || (curChar == '\t')) curChar = getchar();
    if (curChar == '+') { curChar = getchar(); token.tokenType = PLUS; token.valueType = NULL_VAL; return; }
    if (curChar == '-') { curChar = getchar(); token.tokenType = MINUS; token.valueType = NULL_VAL; return; }
	if (curChar == '*') { curChar = getchar(); token.tokenType = STAR; token.valueType = NULL_VAL; return; }
    if (curChar == '/') { curChar = getchar(); token.tokenType = DIVISION; token.valueType = NULL_VAL; return; }
	if (curChar == '(') { curChar = getchar(); token.tokenType = LP; token.valueType = NULL_VAL; return; }
	if (curChar == ')') { curChar = getchar(); token.tokenType = RP; token.valueType = NULL_VAL; return; }
	if (curChar == '\n') { token.tokenType = END; token.valueType = NULL_VAL; return; }

    if ((curChar >= '0') && (curChar <= '9')) {
        token.tokenType = NUMBER;
        token.valueType = INTEGER;
        do {
            intValue = intValue * 10 + curChar - '0';
            curChar = getchar();
        } while ((curChar >= '0') && (curChar <= '9'));
        token.Value.intValue = intValue;
        
        if (curChar == '.') {
            token.valueType = FLOAT; 
            curChar = getchar(); // jump '.' char
            float fraction = 0.1;

            while ((curChar >= '0') && (curChar <= '9')) {
                floatValue += (curChar - '0') * fraction;
                fraction *= 0.1; 
                curChar = getchar();
            }
            token.Value.floatValue = intValue + floatValue;
        } else {
            token.Value.intValue = intValue;
        }
    }
}

void error(int i){
	switch (i) {
		case 1: printf("Syntax Error: Missing '('\n"); break;
		case 2: printf("Syntax Error: Missing ')'\n"); break;
		case 3: printf("Syntax Error: Unexpected End of Expression\n"); break;
        case 4: printf("Syntax Error: Missing '+' or '*'\n"); break;
        case 5: printf("Error: Division by zero\n"); break;
	}
	exit(1);
}

int main(void){
	Token result;
	curChar = ' ';
    printf("Enter an arithmetic expression: ");
	get_token();
    result = expression();
    // if (result.valueType==INTEGER)
    //         printf("%d", result.Value.intValue);
    // else printf("%lf", result.Value.floatValue);
	if (token.tokenType != END) error(3);
	else result.valueType==INTEGER?printf("%d\n", result.Value.intValue) : printf("%lf\n", result.Value.floatValue);
	return 0;
}
syntax_analizer : y.tab.c lex.yy.c
	cc -o syntax_analizer.out y.tab.c lex.yy.c print.c main.c -w
	
y.tab.c : parser.y
	yacc -d parser.y

lex.yy.c : lexer.l
	lex lexer.l
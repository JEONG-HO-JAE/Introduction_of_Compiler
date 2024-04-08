c_parser.out : y.tab.c lex.yy.c
	cc -o c_parser.out y.tab.c lex.yy.c 

y.tab.c : parser.y
	yacc -d parser.y

lex.yy.c : lexer.l
	lex lexer.l
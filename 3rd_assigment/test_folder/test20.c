int main(void){
    char op;
    int age;
    printf("what is your name?");
    scanf("%d",&age);
    if(op == '+') printf("%d\n",1+3);
    else if(op == '-') printf("%d\n",1-3);
    else if(op == '*') printf("%d\n",1*3);
    else if(op == '/') printf("%d\n",1/3);
    else if(op == '%') printf("%d\n",1%3);
    else printf("unknown operator");
    return 0;
}
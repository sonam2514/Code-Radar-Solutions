#include <stdio.h>
int main() {
    int a,b;
    char op;
    scanf("%d %d %c",&a,&b,&op);
    switch(op){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        if(b!=0){
        printf("%d",a/b);}
        break;
        default:
        printf("error");
    }
    return 0;
}
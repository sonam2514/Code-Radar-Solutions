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
        printf("%d",a/b);
        default:
        printf("error");
    }
    return 0;
}
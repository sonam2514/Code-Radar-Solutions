#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int product;
    for(int i=1;i<=10;i++){
        product=n*i;
        printf("%d * %d = %d",n,i,product);
    }
    return 0;
}
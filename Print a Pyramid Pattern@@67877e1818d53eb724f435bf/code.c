#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nstr=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=nstr;k++){
            printf("*");
        }
        nstr+=2;
        printf("\n");
    }
}
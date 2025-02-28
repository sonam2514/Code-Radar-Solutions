#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nst=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
    }
    for(int i=n-1;i>=1;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
    }
        
        printf("\n");

    return 0;
}
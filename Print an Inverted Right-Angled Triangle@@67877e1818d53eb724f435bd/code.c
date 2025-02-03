#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=n; i>0;i--){
        for(j=0;j<i;j++){
            printf("* ")
        }
        printf("\n");
    }
    return 0;
}
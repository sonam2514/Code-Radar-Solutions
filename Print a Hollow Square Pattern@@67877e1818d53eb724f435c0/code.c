#include <stdio.h>

int main() {
    int rows,columns;
    scanf("%d %d",&rows,&columns);
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=columns;j++){
            if(i==1 || i==rows || j==1 || j==columns){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
    }
    return 0;
}
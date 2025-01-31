#include <stdio.h>
int main() {
    int x,y;
    scanf("%d %d", &x,&y);
    int sq=y*y;
    if(x==sq){
        printf("Yes");
    }
    else{
        printf("No");
    }
    
    return 0;
}
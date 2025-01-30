#include <stdio.h>
int main() {
   int x,y,z;
   scanf("%d %d %d", &x, &y, &z);
   if(x+y>z){
    printf("Valid");
   }
   else if(y+z>x){
    printf("Valid");
   }
   else if(x+z>y){
    printf("Valid");
   }
   else{printf("Invalid");}
    return 0;
}
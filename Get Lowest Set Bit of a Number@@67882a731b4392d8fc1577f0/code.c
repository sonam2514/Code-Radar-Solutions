#include <stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   int num = n & -n;
   printf("%d",num);
    return 0;
}
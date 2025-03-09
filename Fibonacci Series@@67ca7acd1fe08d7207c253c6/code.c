// Your code here...
#include <stdio.h>
void fibbonacciSeries(int n){
    int a=0,b=1,sum;
    for(int i=1;i<=n;i++){
        printf("%d",a);
        sum=a+b;
        a=b;
        b=sum;
    }
    return;
}
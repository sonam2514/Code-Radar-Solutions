#include <stdio.h>
#include <stdlib.h>
int main(){
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   } 
   
   for(int i=0;i<n;i++){
    int sum=0;
    int temp=abs(arr[i]);
    while(temp>0){
        int digit=temp%10;
        sum+=digit;
        temp=temp/10;
    }
    printf("%d ",sum);


   }
    return 0;
}
#include <stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   } 
   int sum=0;
   for(int i=0;i<n;i++){
    while(arr[i]>0){
        int digit=arr[i]%10;
        sum+=digit;
        arr[i]=arr[i]/10;
    }
    printf("%d ",sum);


   }
    return 0;
}
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    } 
    int found =0;
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
         for(int j=i+1;j<n;j++){
            if(j>i+1 && arr[j]==arr[j+1]) continue;
         }
    }
   
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                found++;
                printf("%d %d\n",arr[i],arr[j]);
            }
        }

    }
   return 0;
}
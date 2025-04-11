#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max= INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]*arr[j]>max){
                max=arr[i]*arr[j];
            }
        }
    }
    printf("%d",max);
    return 0;
}
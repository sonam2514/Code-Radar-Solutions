#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]-arr[i+1]<2){
            printf("%d %d",arr[i],arr[i+1]);
        }
    }
    return 0;
}
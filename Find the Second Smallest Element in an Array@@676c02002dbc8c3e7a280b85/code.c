#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<2){
        printf("-1");
        return -1;
    }
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int smallest=INT_MAX;
    int smin=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            smin=smallest;
            smallest=arr[i];
        }
        else if(arr[i]<smin && arr[i]!= smallest){
            smin=arr[i];
        }
    }
    if(smin==INT_MAX){
        printf("-1");
    }
    else{
        printf("%d",smin);
    }
    return 0;
}
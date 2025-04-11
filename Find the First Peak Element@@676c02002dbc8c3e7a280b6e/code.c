#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1i++){
        if(arr[i]<arr[i+1]){
            printf("%d",arr[i+1]);
            return 0;
        }
        else if(arr[i]==arr[i+1]){
                printf("-1");
                return 0;
            }
    }
    return 0;
}
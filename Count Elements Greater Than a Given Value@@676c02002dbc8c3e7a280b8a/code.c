#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    int count =0;
    int found=0;
    for(int i=0;i<n;i++){
        if(arr[i]>k){
            count++;
            found=1;
        }
    }
    if(found){
        printf("%d",count);
    }
    return 0;
}
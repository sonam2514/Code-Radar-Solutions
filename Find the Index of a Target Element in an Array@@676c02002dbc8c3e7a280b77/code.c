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
    int found=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            printf("%d",i);
            found=1;
            break;   
        }
    }
    return 0;
}
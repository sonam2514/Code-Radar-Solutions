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
    int a=0;
    int b=0;
    int found =0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                a=arr[i];
                b=arr[j];
                found =1;
                break;
            }
            if(found) break;
        }

    }
    if(found){
        printf("%d %d\n",a,b);
    }
    else{
        printf(" ");
    }
    return 0;
}
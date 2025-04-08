#include <stdio.h>
int prime(int n){
    if(n<2){
        return 0;
    }
    for(int i=2;i<n/2;i++){
        if(n%2==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count =0;
    for(int i=0;i<n;i++){
        if(prime(arr[i])){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
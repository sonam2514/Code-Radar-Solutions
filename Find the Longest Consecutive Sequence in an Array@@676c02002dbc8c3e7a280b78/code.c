#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int longest =1;
    int current=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i+1]){
            continue;
        }
        else if(arr[i]==arr[i-1]+1){
            current++;
        }
        else{
            if(current>longest){
                longest=current;
            }
            current=1;
        }
    }
    if(current>longest){
        longest=current;
    }
    printf("%d",longest);
    return 0;
}
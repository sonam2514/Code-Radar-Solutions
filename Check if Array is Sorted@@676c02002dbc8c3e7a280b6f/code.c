#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int issorted=1;
    // int allequal=1;
    int dec=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            issorted=0;
            
        } 
        // if(arr[i]!=arr[i+1]){
        //     allequal=0;
            
        // } 
        else if(arr[i]<arr[i+1]){
            dec=0;
            
        }
    }

    if(issorted){
        printf("Sorted");
    }
    else if(issorted && dec){
        printf("Sorted");
    }
    else if(dec){
        printf("Not Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}
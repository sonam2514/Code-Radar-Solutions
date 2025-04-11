#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    if(n<2){
        printf("-1");
        return 0;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    int mindiff= abs(arr[0]-arr[1]);
    int a= arr[0];
    int b=arr[1];
    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
        int diff=abs(arr[i]-arr[j]);
        if(diff<mindiff){
            mindiff=diff;
            a=arr[i];
            b=arr[j];
        }  
       }
    }
    if(a<b){
        printf("%d %d",a,b);
    }
    else{
        printf("%d %d",b,a);
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
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
    printf("%d %d",a,b);
    return 0;
}
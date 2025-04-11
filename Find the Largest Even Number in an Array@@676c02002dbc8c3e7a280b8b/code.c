#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest=-1;
    int found =0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0 > largest){
            largest=arr[i];
            found=1;
        }
        if(found){
        largest=arr[i];
        printf("%d",largest);
    }
    else{
        printf("-1");
    }
    }
    
    return 0;
}
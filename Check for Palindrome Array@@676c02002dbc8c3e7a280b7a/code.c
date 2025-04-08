#include <stdio.h>
int palindrome(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]!= arr[j]){
            return 0;
            i++;
            j--;
        }
    }
    return0;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(palindrome(arr,n)){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}
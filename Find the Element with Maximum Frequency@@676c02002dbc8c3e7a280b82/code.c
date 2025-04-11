#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int visited[n];
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    int count =1;
    int maxcount=-1;
    int maxelement=arr[0];
    for(int i=0;i<n;i++){
        if(visited[i]==1){
            continue;
        }
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                visited[j]=1;
            }
        }
        if(count>maxcount){
            maxcount=count;
            maxelement=arr[i];
        }
        
    }
    printf("%d",maxelement);
    return 0;

}
#include <stdio.h>
int isPrime(int n){
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return 1;
        }
        else {
            return 0;
        }
    }
    

}
int main(){
   
   return 0;
}
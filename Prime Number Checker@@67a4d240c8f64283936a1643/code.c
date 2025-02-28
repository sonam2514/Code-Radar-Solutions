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
   int t;
   scanf("%d",&t);
   while(t--){
    int num;
    scanf("%d",&num);
    printf("%d\n",isPrime(num));
   }
   return 0;
}
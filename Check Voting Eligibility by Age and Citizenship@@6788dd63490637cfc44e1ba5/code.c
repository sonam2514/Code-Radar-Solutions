#include <stdio.h>
int main() {
    int age,status;
    scanf("%d %d", &age, &status);
    if(age>=18 && status==1){
        printf("Eligible");
    }
    else{
        printf("Not eligible");
    }
    return 0;
}
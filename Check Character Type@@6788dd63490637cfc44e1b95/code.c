#include <stdio.h>
int main() {
    char ch;
    scanf("%d",&ch);
    if(ch>='0' && ch<='9'){
        printf("Digit");
    }
    else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("Vowel");
    }
    else if("ch">=65 && ch<=90){
        printf("Consonant");
    }
    else{
        printf("Special Character");
    }
    return 0;
}
#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a=='a'|| a=='A' || a=='e' || a=='E' || a=='i' || a=='I' || a=='o' || a=='O' || a=='u' || a=='U'){
        printf("Vowel");
    }
    else if((a>'a' || a>'A') && (a<='z' || a<='Z')){
        printf("Consonant");
    }
    else if(a=='@'){
        printf("Special Character");
    }
    else{
        printf("Digit");
    }
    return 0;
}
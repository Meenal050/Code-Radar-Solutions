#include<stdio.h>
int main(){
    char r,c,N;
    scanf("%c",&N);
    for(r='A';r<=N;r++){
        for(c='A';c<=N;c++){
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}
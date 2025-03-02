#include<stdio.h>
int main(){
    int N;
    char r,c;
    scanf("%d",&N);
    for(r=65;r<=N;r++){
        for(c=65;c<=N;c++){
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}
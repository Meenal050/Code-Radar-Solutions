#include<stdio.h>
int main(){
    int N;
    char r,c;
    scanf("%d",&N);
    for(r='A';r<='N';r++){
        for(c='A';c<='N';c++){
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}
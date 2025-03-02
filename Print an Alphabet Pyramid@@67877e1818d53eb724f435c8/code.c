#include<stdio.h>
int main(){
    int N;
    char r,c;
    scanf("%d";&N);
    for(r=65;r<=N;r++){
        for(c=65;c<=r;c++){
            printf("%c ",r);
        }
        printf("\n");
    }
}
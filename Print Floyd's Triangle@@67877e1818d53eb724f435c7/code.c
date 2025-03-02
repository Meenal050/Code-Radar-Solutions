#include<stdio.h>
int main(){
    int r,c,N,count=1;
    scanf("%d",&N);
    for(r=1;r<=N;r++){
        for(c=1;c<=r;c++){
            printf("%c ",count);
            ++count;
        }
        printf("\n");
    }
}
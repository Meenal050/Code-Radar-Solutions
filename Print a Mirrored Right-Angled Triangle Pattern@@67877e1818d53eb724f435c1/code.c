#include<stdio.h>
int main(){
    int r,c,N,s;
    scanf("%d",&N);
    for(r=1;r<=N;r++){
        for(s=r;s<N;s++){
            printf(" ");
        }
        for(c=1;c<=r;c++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int N,sum=0,i=1;
    scanf("%d",&N);
    while(i<=N){
        sum=sum+i;
        printf("%d",sum);
        i++;
    }
    return 0;

}
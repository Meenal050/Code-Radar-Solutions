#include<stdio.h>
int main(){
    int a,i=0;
    scanf("%d",&a);
    while(i<=a){
        printf("*",*i);
        i--;
    }
    return 0;
}
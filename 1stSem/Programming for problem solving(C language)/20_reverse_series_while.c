// Write a program in C to find out reverse series using while loop.
#include<stdio.h>
int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Reverse series: ");

    while(n>=1){
        printf("%d ",n);
        n--;
    }

    return 0;
}
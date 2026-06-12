// Write a program in C to print the odd series using while loop.
#include<stdio.h>
int main(){
    int n,i=1;

    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Odd series: ");

    while(i<=n){
        printf("%d ",i);
        i=i+2;
    }

    return 0;
}
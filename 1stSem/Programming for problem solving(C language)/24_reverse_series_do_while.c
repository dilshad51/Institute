// Write a program in C to print the reverse series using do while loop.
#include<stdio.h>
int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Reverse series: ");

    do{
        printf("%d ",n);
        n--;
    }while(n>=1);

    return 0;
}
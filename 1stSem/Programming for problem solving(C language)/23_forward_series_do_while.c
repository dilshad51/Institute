// Write a program in C to print the forward series using do while loop.
#include<stdio.h>
int main(){
    int n,i=1;

    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Forward series: ");

    do{
        printf("%d ",i);
        i++;
    }while(i<=n);

    return 0;
}
// Write a program in C to print the factor of a number using do while loop.
#include<stdio.h>
int main(){
    int n,i=1;

    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Factors: ");

    do{
        if(n%i==0)
            printf("%d ",i);

        i++;
    }while(i<=n);

    return 0;
}
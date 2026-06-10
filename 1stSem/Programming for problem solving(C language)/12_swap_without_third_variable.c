// Write a program in C to swap the variable value without using third variable.
#include<stdio.h>
int main(){
    int a,b;

    printf("Enter first number: ");
    scanf("%d",&a);

    printf("Enter second number: ");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After swapping:\n");
    printf("a=%d",a);
    printf("\tb=%d",b);

    return 0;
}
// Write a program in C to swap the variable value using third variable.
#include<stdio.h>
int main(){
    int a,b,temp;

    printf("Enter first number: ");
    scanf("%d",&a);

    printf("Enter second number: ");
    scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;

    printf("After swapping:\n");
    printf("a=%d",a);
    printf("\tb=%d",b);

    return 0;
}
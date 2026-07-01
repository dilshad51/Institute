// Write a program in C to print calculator of two numbers using dynamic input.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%f",&a);
    printf("Enter second number: ");
    scanf("%f",&b);
     printf("\nAddition = %.2f\n", a + b);
    printf("Subtraction = %.2f\n", a - b);
    printf("Multiplication = %.2f\n", a * b);

    if (b != 0)
        printf("Division = %.2f\n", a / b);
    else
        printf("Division not possible (denominator is 0)\n");

    return 0;

}
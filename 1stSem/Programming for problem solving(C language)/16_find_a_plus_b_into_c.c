// Write a program in C to find A + B * C, where A, B are int and C is float.
#include<stdio.h>
int main(){
    int a,b;
    float c;

    printf("Enter A: ");
    scanf("%d",&a);

    printf("Enter B: ");
    scanf("%d",&b);

    printf("Enter C: ");
    scanf("%f",&c);

    float result = a + b*c;

    printf("Result: %.2f",result);

     ;
}
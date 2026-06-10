// Write a program in C to enter radius of circle and find the area and circumference.
#include<stdio.h>
int main(){
    float r;
    printf("Enter radius: ");
    scanf("%f",&r);

    float area=3.14*r*r;
    float cir=2*3.14*r;

    printf("Area: %.2f",area);
    printf("\tCircumference: %.2f",cir);

    return 0;
}
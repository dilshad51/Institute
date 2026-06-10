// Write a program in C to enter a temp in Celsius and turn it into Fahrenheit.
#include<stdio.h>
int main(){
    float c,f;
    printf("Enter temperature in Celcius: ");
    scanf("%f",&c);
    f=(c*1.8)+32;
    printf("Temeprature in fahrenheit: %.2f",f);
    return 0;
}
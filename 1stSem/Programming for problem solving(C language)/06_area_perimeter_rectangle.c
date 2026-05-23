// Write a program in C to print the area and perimeter of a rectangle where length and breadth are given.
#include<stdio.h>
int main(){
    int l,b;
    printf("Enter length: ");
    scanf("%d",&l);
    printf("Enter breadth: ");
    scanf("%d",&b);

    int area=l*b;
    int per=2*(l+b);
    
    printf("Area: %d",area);
    printf("\tPerimeter: %d",per);
    return 0;
}
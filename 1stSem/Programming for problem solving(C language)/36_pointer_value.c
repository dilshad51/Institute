// Write a program in C to print the value using pointer.
#include<stdio.h>
int main(){
    int a;
    int *p;

    printf("Enter a number: ");
    scanf("%d",&a);

    p=&a;

    printf("Value=%d\n",*p);
    printf("Address=%p",p);

    return 0;
}
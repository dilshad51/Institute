// Write a program in C to swap two numbers using call by reference.
#include<stdio.h>

void swap(int *a,int *b){
    int temp;

    temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a,b;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    swap(a,&);

    printf("After swap:\n");
    printf("a=%d\tb=%d",a,b);

    return 0;
}
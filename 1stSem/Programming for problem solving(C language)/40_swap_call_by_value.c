// Write a program in C to swap two numbers using call by value.
#include<stdio.h>

void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;

    printf("Inside function:\n");
    printf("a=%d\tb=%d\n",a,b);
}

int main(){
    int a,b;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    swap(a,b);

    printf("Outside function:\n");
    printf("a=%d\tb=%d",a,b);

    return 0;
}
// Write a program in C for chain of pointer.
#include<stdio.h>
int main(){
    int a=10;
    int *p;
    int **q;

    p=&a;
    q=&p;

    printf("Value of a=%d\n",a);
    printf("Using p=%d\n",*p);
    printf("Using q=%d",**q);

    return 0;
}
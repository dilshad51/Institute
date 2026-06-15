// Write a program in C to print array of pointer.
#include<stdio.h>
int main(){
    int a[5]={10,20,30,40,50};
    int *p[5];

    for(int i=0;i<5;i++)
        p[i]=&a[i];

    printf("Array elements using pointers:\n");

    for(int i=0;i<5;i++)
        printf("%d ",*p[i]);

    return 0;
}
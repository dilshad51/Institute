// Write a program in C to print 1D array using macro.
#include<stdio.h>
#define SIZE 5

int main(){
    int a[SIZE];

    printf("Enter %d elements: ",SIZE);

    for(int i=0;i<SIZE;i++)
        scanf("%d",&a[i]);

    printf("Array elements: ");

    for(int i=0;i<SIZE;i++)
        printf("%d ",a[i]);

    return 0;
}
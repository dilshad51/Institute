// Write a program in C to find the even series using while loop.
#include<stdio.h>
int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Even series: ");
    int i=2;
    while(i<=2*n){
        printf("%d ",i);
        i=i+2;
    }

    return 0;
}
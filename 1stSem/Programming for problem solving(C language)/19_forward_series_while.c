// Write a program in C to find out forward series using while loop.
#include<stdio.h>
int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Forward series: ");
    int i=1;
    while(i<=n){
        printf("%d ",i);
        i++;
    }
    return 0;
}
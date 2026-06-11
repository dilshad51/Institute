// Write a program in C to find out the reverse series.
#include<stdio.h>
int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Reverse series: \n");

    for(int i=n;i>=1;i--){
        printf("%d\n",i);
    }

    return 0;
}
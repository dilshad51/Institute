// Write a program in C to find the forward series of a given number and its sum.
#include<stdio.h>
int main(){
    int n,sum=0;

    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Series: ");

    for(int i=1;i<=n;i++){
        printf("%d ",i);
        sum=sum+i;
    }

    printf("\nSum=%d",sum);

    return 0;
}
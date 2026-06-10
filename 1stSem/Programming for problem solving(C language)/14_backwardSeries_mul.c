// Write a c program for printing backward series and their product.
#include<stdio.h>
int main(){
    int n,pro=1;

    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Backward series: ");

    for(int i=n;i>=1;i--){
        printf("%d ",i);
        pro=pro*i;
    }

    printf("\nProduct: %d",pro);

    return 0;
}
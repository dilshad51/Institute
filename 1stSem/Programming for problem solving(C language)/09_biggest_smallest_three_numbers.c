// Write a program in C to print 3 numbers and check the biggest and smallest.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a<b && a>c)
        printf("Biggest number: %d\n",a);
    else if(b>c)
        printf("Biggest number: %d\n",b);
    else
        printf("Biggest number: %d\n",c);

    if(a<b && a<c)
        printf("Smallest number: %d",a);
    else if(b<c)
        printf("Smallest number: %d",b);
    else
        printf("Smallest number: %d",c);

    return 0;
}
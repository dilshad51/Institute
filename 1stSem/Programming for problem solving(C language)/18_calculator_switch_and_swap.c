// Write a program in C using switch case for calculator and swap the values
#include<stdio.h>
int main(){
    int a,b,ch;

    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);

    printf("1.Add\n2.Sub\n3.Mul\n4.Div\n");
    printf("Enter choice: ");
    scanf("%d",&ch);

    switch(ch){
        case 1:
            printf("Result=%d",a+b);
            break;

        case 2:
            printf("Result=%d",a-b);
            break;

        case 3:
            printf("Result=%d",a*b);
            break;

        case 4:
            printf("Result=%d",a/b);
            break;

        default:
            printf("Invalid");
    }
    int temp=a;
    b=a;
    a=temp;
    printf("\nAfter swapping: \n");
    printf("a=%d\nb=%d\n",a,b);

    return 0;
}
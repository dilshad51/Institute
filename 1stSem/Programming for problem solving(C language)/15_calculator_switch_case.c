// Write a program in C to find calculator using switch case.
#include<stdio.h>
int main(){
    int a,b,ch;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);

    switch(ch){
        case 1:
            printf("Sum=%d",a+b);
            break;

        case 2:
            printf("Difference=%d",a-b);
            break;

        case 3:
            printf("Product=%d",a*b);
            break;

        case 4:
            printf("Division=%d",a/b);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
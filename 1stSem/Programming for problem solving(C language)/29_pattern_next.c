// Write a program in C to print the following pattern.
//    A
//   ABA
//  ABCBA
// ABCDCBA
#include<stdio.h>
int main(){
    int n;
    printf("Enter rows: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){

        for(int j=1;j<=n-i;j++)
            printf(" ");

        for(char k='A';k<'A'+i;k++)
            printf("%c",k);

        for(char k='A'+i-2;k>='A';k--)
            printf("%c",k);

        printf("\n");
    }

    return 0;
}
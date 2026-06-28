// Write a program in C to print the pattern as follows.
//    A
//   AB
//  ABC
// ABCD
#include<stdio.h>
int main(){
    int n;
    printf("Enter rows: ");
    scanf("%d",&n);

    for(int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++)
            printf(" ");

        for(char k='A';k<'A'+i;k++)
            printf("%c",k);

        printf("\n");
    }

    return 0;
}
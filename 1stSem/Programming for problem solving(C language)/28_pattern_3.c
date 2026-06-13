// Write a program in C to print the pattern as follows.
//    A
//   AB
//  ABC
// ABCD
#include<stdio.h>
int main(){

    for(int i=1;i<=4;i++){
        for(int j=1;j<=4-i;j++)
            printf(" ");

        for(char k='A';k<'A'+i;k++)
            printf("%c",k);

        printf("\n");
    }

    return 0;
}
// Write a program in java to check whether it is positive, negative or zero.
import java.util.Scanner;
class CheckNumber{
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter number: ");
        int n=sc.nextInt();

        if(n==0) System.out.println("Equals to zero");
        if(n>0) System.out.println("Positive Number");
        if(n<0) System.out.println("Negative Number");

    }
}
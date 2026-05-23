// Write a program in java to calculate square root of a number.
import java.util.Scanner;
class Sqrt{
    public static void main(String []args){
        Scanner sc = new Scanner (System.in);
        System.out.print("Enter a number: ");
        int n=sc.nextInt();
        System.out.println("Square root of "+n+" is "+Math.sqrt(n));
    }
}
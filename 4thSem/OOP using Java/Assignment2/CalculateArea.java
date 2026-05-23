// Write a program in java to calculate area of a room.
import java.util.Scanner;
class CalculateArea{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter length: ");
        float length= sc.nextFloat();
        System.out.print("Enter breadth: ");
        float breadth= sc.nextFloat();

        System.out.println("Area = "+length*breadth);

    }
}
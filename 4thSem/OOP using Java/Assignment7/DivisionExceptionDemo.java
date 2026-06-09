// Write a Java program to perform division of two numbers. If the denominator is zero, explicitly throw an ArithmeticException and handle it using a catch block. Use a finally block to display a completion message.
import java.util.Scanner;

public class DivisionExceptionDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        try {
            System.out.print("Enter numerator: ");
            int numerator = sc.nextInt();

            System.out.print("Enter denominator: ");
            int denominator = sc.nextInt();

            // Explicitly throw ArithmeticException
            if (denominator == 0) {
                throw new ArithmeticException("Denominator cannot be zero.");
            }

            double result = (double) numerator / denominator;
            System.out.println("Result = " + result);

        } catch (ArithmeticException e) {
            System.out.println("Exception Caught: " + e.getMessage());

        } finally {
            System.out.println("Program execution completed.");
            sc.close();
        }
    }
}
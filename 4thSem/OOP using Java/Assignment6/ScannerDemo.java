import java.util.Scanner;

public class ScannerDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input
        System.out.print("Enter an integer: ");
        int numInt = sc.nextInt();

        System.out.print("Enter a float: ");
        float numFloat = sc.nextFloat();

        sc.nextLine(); // Consume leftover newline

        System.out.print("Enter a string: ");
        String text = sc.nextLine();

        // Display entered values
        System.out.println("\nEntered Values:");
        System.out.println("Integer: " + numInt);
        System.out.println("Float: " + numFloat);
        System.out.println("String: " + text);

        // Arithmetic operations
        System.out.println("\nArithmetic Operations:");
        System.out.println("Addition = " + (numInt + numFloat));
        System.out.println("Subtraction = " + (numInt - numFloat));
        System.out.println("Multiplication = " + (numInt * numFloat));

        if (numFloat != 0) {
            System.out.println("Division = " + (numInt / numFloat));
        } else {
            System.out.println("Division not possible (float value is 0)");
        }

        sc.close();
    }
}
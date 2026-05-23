// Write a program in java for simple calculator.
public class SimpleCalculatorFixed {
    public static void main(String[] args) {

        double num1 = 10;     // fixed input 1
        double num2 = 5;      // fixed input 2
        char operator = '+';  // change operator here

        double result = 0;

        switch (operator) {
            case '+':
                result = num1 + num2;
                System.out.println("Addition = " + result);
                break;

            case '-':
                result = num1 - num2;
                System.out.println("Subtraction = " + result);
                break;

            case '*':
                result = num1 * num2;
                System.out.println("Multiplication = " + result);
                break;

            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    System.out.println("Division = " + result);
                } else {
                    System.out.println("Error! Division by zero.");
                }
                break;

            default:
                System.out.println("Invalid operator");
        }
    }
}
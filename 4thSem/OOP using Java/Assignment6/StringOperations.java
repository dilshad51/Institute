// 3. Accept a string from the user and perform the following operations:
// Display the length of the string using length().
// Display the character at a given position using charAt().
// Convert the string to uppercase and lowercase using toUpperCase() and toLowerCase().
// Remove leading and trailing spaces using trim().
// Extract a substring using substring().
// Find the position of a specified character using indexOf().
// Compare two strings using equals(), equalsIgnoreCase(), and compareTo().
// Convert the string into a character array using toCharArray().
import java.util.Scanner;

public class StringOperations {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Accept String
        System.out.print("Enter a string: ");
        String str = sc.nextLine();

        // Length of String
        System.out.println("\nLength of the string: " + str.length());

        // Character at a given position
        System.out.print("Enter position to get character (0 to " + (str.length() - 1) + "): ");
        int pos = sc.nextInt();
        System.out.println("Character at position " + pos + ": " + str.charAt(pos));

        sc.nextLine(); // Consume newline

        // Uppercase and Lowercase
        System.out.println("Uppercase: " + str.toUpperCase());
        System.out.println("Lowercase: " + str.toLowerCase());

        // Trim spaces
        System.out.println("After trim(): '" + str.trim() + "'");

        // Substring
        System.out.print("Enter starting index for substring: ");
        int start = sc.nextInt();

        System.out.print("Enter ending index for substring: ");
        int end = sc.nextInt();

        System.out.println("Substring: " + str.substring(start, end));

        sc.nextLine(); // Consume newline

        // indexOf()
        System.out.print("Enter a character to search: ");
        char ch = sc.next().charAt(0);

        System.out.println("Position of '" + ch + "': " + str.indexOf(ch));

        sc.nextLine(); // Consume newline

        // Compare Strings
        System.out.print("Enter another string for comparison: ");
        String str2 = sc.nextLine();

        System.out.println("equals(): " + str.equals(str2));
        System.out.println("equalsIgnoreCase(): " + str.equalsIgnoreCase(str2));
        System.out.println("compareTo(): " + str.compareTo(str2));

        // Convert to Character Array
        char[] arr = str.toCharArray();

        System.out.println("Character Array:");
        for (char c : arr) {
            System.out.print(c + " ");
        }

        sc.close();
    }
}
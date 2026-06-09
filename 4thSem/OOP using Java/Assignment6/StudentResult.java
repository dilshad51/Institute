// 2. Write a Java program that accepts:
// Student Name
// Roll Number
// Marks in three subjects

// using the BufferedReader class and displays:

// Total Marks
// Average Marks
// Grade
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class StudentResult {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // Input
        System.out.print("Enter Student Name: ");
        String name = br.readLine();

        System.out.print("Enter Roll Number: ");
        int rollNo = Integer.parseInt(br.readLine());

        System.out.print("Enter Marks in Subject 1: ");
        int m1 = Integer.parseInt(br.readLine());

        System.out.print("Enter Marks in Subject 2: ");
        int m2 = Integer.parseInt(br.readLine());

        System.out.print("Enter Marks in Subject 3: ");
        int m3 = Integer.parseInt(br.readLine());

        // Calculate Total and Average
        int total = m1 + m2 + m3;
        double average = total / 3.0;

        // Determine Grade
        String grade;
        if (average >= 90)
            grade = "A";
        else if (average >= 75)
            grade = "B";
        else if (average >= 60)
            grade = "C";
        else if (average >= 40)
            grade = "D";
        else
            grade = "F";

        // Display Result
        System.out.println("\n----- Student Report -----");
        System.out.println("Name        : " + name);
        System.out.println("Roll Number : " + rollNo);
        System.out.println("Total Marks : " + total);
        System.out.println("Average     : " + average);
        System.out.println("Grade       : " + grade);
    }
}
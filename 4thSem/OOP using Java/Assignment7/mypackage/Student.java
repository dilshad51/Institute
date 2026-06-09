package mypackage;

public class Student {
    public String name = "Rahul";      // Public
    protected int age = 20;            // Protected
    int rollNo = 101;                  // Default
    private double marks = 85.5;       // Private

    public void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Roll No: " + rollNo);
        System.out.println("Marks: " + marks);
    }
}
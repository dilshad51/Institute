// Create a package named mypackage containing a class Student. The class should have members with different access modifiers. Import the package into another class and demonstrate which members can be accessed from outside the package.
import mypackage.Student;

public class TestStudent {
    public static void main(String[] args) {

        Student s = new Student();

        // Accessible outside package
        System.out.println("Name: " + s.name);

        // Not Accessible
        // System.out.println(s.age);      // Protected
        // System.out.println(s.rollNo);   // Default
        // System.out.println(s.marks);    // Private

        s.display(); // Public method can be called
    }
}
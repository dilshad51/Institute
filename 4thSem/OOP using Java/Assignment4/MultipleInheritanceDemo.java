interface Printable {
    void print();
}
interface Showable {
    void show();
}
class Person {
    void displayPerson() {
        System.out.println("This is the parent class");
    }
}
class Student extends Person implements Printable, Showable {

    public void print() {
        System.out.println("Printing");
    }
    public void show() {
        System.out.println("Showing");
    }
}
public class MultipleInheritanceDemo {
    public static void main(String[] args) {

        Student s = new Student();

        s.displayPerson(); // inherited from Person
        s.print();         // from Printable
        s.show();          // from Showable
    }
}
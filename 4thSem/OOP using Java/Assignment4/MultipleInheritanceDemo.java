// WAP in jav awhere a class is extending another class and implemtnting two interfaces
// Super class
class Animal {
    void eat() {
        System.out.println("Animal is eating");
    }
}

// First interface
interface Pet {
    void play();
}

// Second interface
interface Guard {
    void protect();
}

// Child class extending Animal and implementing Pet & Guard
class Dog extends Animal implements Pet, Guard {

    // Implementing play() method
    public void play() {
        System.out.println("Dog is playing");
    }

    // Implementing protect() method
    public void protect() {
        System.out.println("Dog is protecting the house");
    }
}

// Main class
public class MultipleInheritanceDemo {
    public static void main(String[] args) {

        Dog d = new Dog();

        d.eat();       // inherited from Animal
        d.play();      // from Pet interface
        d.protect();   // from Guard interface
    }
}
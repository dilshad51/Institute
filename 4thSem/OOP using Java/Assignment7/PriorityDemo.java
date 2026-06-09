// Write a Java program that creates two child threads using the Runnable interface. Assign maximum priority to one thread and minimum priority to the other thread, and display their names and priorities.
class MyThread implements Runnable {
    public void run() {
        Thread t = Thread.currentThread();
        System.out.println("Name = " + t.getName());
        System.out.println("Priority = " + t.getPriority());
    }
}

public class PriorityDemo {
    public static void main(String[] args) {

        Thread t1 = new Thread(new MyThread(), "Thread-1");
        Thread t2 = new Thread(new MyThread(), "Thread-2");

        t1.setPriority(10); // Maximum
        t2.setPriority(1);  // Minimum

        t1.start();
        t2.start();
    }
}
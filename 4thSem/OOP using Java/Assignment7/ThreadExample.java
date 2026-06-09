// 3. Write a Java program that creates a child thread by extending the Thread class. The child thread should display numbers from 1 to 5, while the main thread displays numbers from 6 to 10.
class ChildThread extends Thread {
    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println("Child Thread: " + i);
        }
    }
}

public class ThreadExample {
    public static void main(String[] args) {

        ChildThread t = new ChildThread();
        t.start(); // Start child thread

        for (int i = 6; i <= 10; i++) {
            System.out.println("Main Thread: " + i);
        }
    }
}
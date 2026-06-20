// WAP in java to implement command line argument

public class PrintCommandLineArgument {
    public static void main(String[] args) {
        int count = args.length;
        System.out.println("The number of arguments is " + count);
        for (int i = 0; i < count; i++) {
            System.out.println("Argument " + (i+1) + ": " + args[i]);
        }
    }
}


// java PrintCommandLineArgument Hello World 123

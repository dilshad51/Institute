// Write a program in java to print numbers from 1 to 10 both in forward and backward direction

//import java.util.Scanner;
class PrintNumbers{
    public static void main(String[] args) {
  //      Scanner sc =new Scanner(System.in);
    //    System.out.print("Enter number: ");
      //  int n=sc.nextInt();
      int n=10;
        System.out.println("Forward series: ");
        for (int i=1;i<=n;i++) System.out.println(i);
        System.out.println("Backward series: ");
        for(int i=n;i>=1;i--) System.out.println(i);
    }
}
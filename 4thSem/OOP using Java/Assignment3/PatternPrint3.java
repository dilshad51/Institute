/*
    WAP in java to print
    1
    12
    123
    1234
    12345

*/



public class PatternPrint3 {
    public static void main(String[] args) {
        for(int i=1;i<=5;i++){
            int n=1;
            for(int j=1;j<=i;j++){
                System.out.print(n+" ");
                n++;
            }
            System.out.println();
        }
    }
}

// Write a program in java to concatenate two strings and count the length of the string.

//import java.util.Scanner;

class StringConcatLength{
    public static void main(String[] args) {
        //Scanner sc=new Scanner(System.in);

//        System.out.print("Enter first string: ");
//        String firstStr= sc.nextLine();
//        System.out.print("Enter second string: ");
//        String secondStr= sc.nextLine();

        String firstStr="Good";
        String secondStr="Morning";
        String finalStr= firstStr+secondStr;

//        char [] arr = finalStr.toCharArray();
        int count=0;
        for(char c: finalStr.toCharArray()){
            count++;
        }
        System.out.println("Concatenated String: "+finalStr+"\nLength of the string: "+count);
        

    }
}
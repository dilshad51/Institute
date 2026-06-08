// Write a java program to create an array and then to search and element in the array, where both the array and the searching element are taken statically 
public class StaticArraySearch {
    public static void main(String[] args) {
        int[] arr = {10, 20, 30, 40, 50};
        int search=30;
        int flag=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]==search){
                System.out.println("Element found at position "+ (i+1));
                flag=1;
                break;
            }
        }
        if(flag==0){
            System.out.println("Element not found");
        }
    }
}

// WAP in java to create a 2D array and take input statically and then print the elements in the 2D array in the matrix format
public class Print2DArray {
    public static void main(String[] args) {
        int [][]matrix={
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };
        System.out.println("2D array is:");
        for (int i=0;i<matrix.length;i++){
            for(int j=0;j<matrix[i].length;j++){
                System.out.print(matrix[i][j]+"\t");
            }
            System.out.println();
        }
    }
}

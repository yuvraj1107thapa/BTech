import java.util.*;

public class JaggedArray {

    public static void main(String[] args) {

        int[][] jaggedArray = {
            {1, 2, 3},
            {4, 5, 6, 7},
            {8, 9}
        };

        int[] rowSums = new int[jaggedArray.length];
        for (int i = 0; i < jaggedArray.length; i++) {
            int sum = 0;
            for (int j = 0; j < jaggedArray[i].length; j++) {
                sum += jaggedArray[i][j];
            }
            rowSums[i] = sum;
        }
        
        System.out.println("Jagged Array:");
        for (int i = 0; i < jaggedArray.length; i++) {
            for (int j = 0; j < jaggedArray[i].length; j++) {
                System.out.print(jaggedArray[i][j] + " ");
            }
            System.out.println();
        }
        System.out.println("Row Sums:");
        for (int i = 0; i < rowSums.length; i++) {
            System.out.println(rowSums[i]);
        }
    }
}

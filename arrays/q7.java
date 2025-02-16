// Given an array arr[] denoting heights of N towers and a positive integer K.For each tower, you must perform exactly one of the following operations exactly once.
// Increase the height of the tower by K & Decrease the height of the tower by K
// Find out the minimum possible difference between the height of the shortest and tallest towers after you have modified each tower.
// You can find a slight modification of the problem here.
// Note: It is compulsory to increase or decrease the height by K for each tower. After the operation, the resultant array should not contain any negative integers.
import java.util.Arrays;

public class MinimizeTowerDifference {
    public static int getMinDiff(int[] arr, int k) {
        int n = arr.length;
        if (n == 1) return 0; // If there's only one tower, no difference.

        Arrays.sort(arr); // Step 1: Sort the array

        int result = arr[n - 1] - arr[0]; // Initial max difference

        int minHeight, maxHeight;
        
        for (int i = 1; i < n; i++) {
            if (arr[i] - k < 0) continue; // Ensure heights remain non-negative
            
            // Step 2: Calculate new min & max after modifications
            minHeight = Math.min(arr[0] + k, arr[i] - k);
            maxHeight = Math.max(arr[n - 1] - k, arr[i - 1] + k);
            
            // Step 3: Update the minimum possible difference
            result = Math.min(result, maxHeight - minHeight);
        }

        return result;
    }

    public static void main(String[] args) {
        int arr1[] = {1, 5, 8, 10};
        int k1 = 2;
        System.out.println("Minimum difference: " + getMinDiff(arr1, k1)); // Output: 5

        int arr2[] = {3, 9, 12, 16, 20};
        int k2 = 3;
        System.out.println("Minimum difference: " + getMinDiff(arr2, k2)); // Output: 11
    }
}

// Different sort of question .
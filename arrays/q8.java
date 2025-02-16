// Kadane's algorithm for findng max subarray sum in o(n)
class Solution {
    int maxSubarraySum(int[] arr) {
        // Your code here
        int max = Integer.MIN_VALUE;
        int curr = 0;
        for(int i=0;i<arr.length;i++){
            curr += arr[i]; 
            if(curr > max)
                max = curr;
            if(curr < 0)
                curr =0;
        }
        return max;
    }
}
// You are given an integer array arr[]. Your task is to find the smallest positive number missing from the array.
// Note: Positive number starts from 1. The array can have negative integers too.

class Solution {
    // Function to find the smallest positive number missing from the array.
    public int missingNumber(int[] arr) {
        // Your code here
        int n = arr.length;
        for(int i=0;i<n;i++){
            if(arr[i] > n || arr[i] <=0)
                arr[i] = n+1;
        }
        
        for(int i=0;i<n;i++){
            int pos = Math.abs(arr[i]);
            if(pos - 1 < n && arr[pos-1] > 0)
                arr[pos-1]  =- arr[pos-1];
        }
        
        for(int i=0;i<n;i++){
            if(arr[i] > 0){
                return i+1;
            }
        }
        return n+1;
    }
}
// You are given an array arr[] of non-negative integers. Your task is to move all the zeros in the array to the right end 
// while maintaining the relative order of the non-zero elements. The operation must be performed in place, meaning you should not use extra space for another array.
class Solution {
    void pushZerosToEnd(int[] arr) {
        // code here
        int last = 0; // pointer where zero was found last
        for(int i=0;i<arr.length;i++){
            if(arr[i] != 0){
                int temp = arr[last];
                arr[last] = arr[i];
                arr[i] = temp;
                last++;
            }
        }
    }
}
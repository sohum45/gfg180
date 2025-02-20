// Given an array arr[] that contains positive and negative integers (may contain 0 as well). Find the maximum product that we can get in a subarray of arr[].
// Note: It is guaranteed that the output fits in a 32-bit integer.
public class maxProduct {
    public static int optimisedMaxProduct(int nums[]){
        int maxi = Integer.MIN_VALUE;
        int prefix = 1, suffix =1;
        for(int i=0;i< nums.length;i++){

            if(prefix == 0) prefix = 1;
            if (suffix == 0) suffix =1;

            prefix *= nums[i];
            suffix *= nums[nums.length-1-i]; // traversing backwards
            maxi = Math.max(maxi, Math.max(prefix,suffix));
        }
        return maxi;
}
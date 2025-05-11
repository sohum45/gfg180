// First and last occurence 
class Solution {
    public int[] searchRange(int[] nums, int target) {
        int lo = 0, hi = nums.length-1;
        int[] arr = {-1, -1};
        // check for first occurence
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid] < target){
                lo = mid+1;
            }
            else if(nums[mid] > target){
                hi = mid-1;
            }
            else{ 
                arr[0] = mid;
                hi = mid - 1; // continue searching left
            }
        }
        // Check for the last occurence
        lo = 0;
        hi = nums.length - 1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid] < target){
                lo = mid+1;
            }
            else if(nums[mid] > target){
                hi = mid-1;
            }
            else{ // mid == target and 
                arr[1] = mid;
                lo = mid + 1; // continue searching right
            }
        }
        return arr;
    }
}
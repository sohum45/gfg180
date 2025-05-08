// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.
// You must write an algorithm with O(log n) runtime complexity.

class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int lo = 0 , hi = nums.size()-1, ans=0;
            while(lo <= hi){
                int mid = lo + (hi-lo)/2;
                if(nums[mid] == target) return mid;
                else if(nums[lo] <= nums[mid] ){ // check if left part is sorted 
                    if(nums[lo] <= target && target <= nums[mid]){
                        hi = mid-1;
                    }
                    else{
                        lo = mid+1;
                    }
                }
                else{ // check if the right part is sorted
                   if(nums[mid] <= target && target <= nums[hi]){
                    lo = mid+1;
                   }
                   else{
                    hi = mid-1;
                   }
                }
            }
            return -1;
        }
    };
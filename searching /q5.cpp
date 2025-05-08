


class Solution {
    public:
        bool search(vector<int>& nums, int target) {
            int lo = 0 , hi = nums.size()-1;
                while(lo <= hi){
                    int mid = lo + (hi-lo)/2;
                    if(nums[mid] == target) return true;
                    else if(nums[lo] == nums[mid] && nums[mid] == nums[hi]){ // handling the base case when lo & hi have same value and are not = to target
                        lo += 1;
                        hi -= 1;
                    }
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
                return false;
        }
    };
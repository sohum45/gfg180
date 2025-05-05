// basic binary search striver a2z dsa sheet .
class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int lo = 0 , hi = nums.size() -1;  // mistake in size function
            
            while(lo <= hi){
                int mid = lo + (hi-lo)/2;
                if(target < nums[mid]){
                    hi = mid-1;
                }
                else if(target > nums[mid]){
                    lo = mid+1;
                }
                else{
                    return mid; // mistake in returning mid
                }
            }
            return -1;
        }
    };
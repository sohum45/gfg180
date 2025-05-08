// 153. Find Minimum in Rotated Sorted Array

class Solution {
    public:
        int findMin(vector<int>& arr) {
            int lo = 0, hi = arr.size()-1,ans = INT_MAX;
            while(lo <=hi){
                int mid = lo + (hi-lo)/2;
                if(arr[lo] <= arr[mid]){  // left part sorted
                    ans = min(ans , arr[lo]);
                    lo = mid+1; // update ans then move
                }
                else{
                    ans = min(ans,arr[mid]);
                    hi = mid-1;
                }
            }
            return ans;
        }
    };
    
    
    // identify the sorted half first
    // sorted half may or may not have the ans
    // take the min from the sorted half and eliminate left / right half
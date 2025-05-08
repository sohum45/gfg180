// Given a sorted array arr[] and a number target, the task is to find the lower bound of the target in this given array. The lower bound of a number is defined as the smallest index in the sorted array where the element is greater than or equal to the given number.

class Solution {
    public:
      int lowerBound(vector<int>& arr, int target) {
          // code here
          int lo = 0 , hi = arr.size() - 1;
          int ans = arr.size();
          
          while(lo <= hi){
              int mid = lo + (hi - lo)/2;
              if(target <= arr[mid]){
                  ans = mid; // taking the current mid
                  hi = mid-1;
              }
              else{
                  lo = mid+1;
              }   
          }
          return ans;
    }
};  
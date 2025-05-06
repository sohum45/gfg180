// Given a sorted array arr[] and a number target, the task is to find the upper bound of the target in this given array.
// The upper bound of a number is defined as the smallest index in the sorted array where the element is greater than the given number.
// Note: If all the elements in the given array are smaller than or equal to the target, the upper bound will be the length of the array.

class Solution {
    public:
      int upperBound(vector<int>& arr, int target){
          
      int low = 0, high = arr.size();
      while (low < high) {
          int mid = (low + high) / 2;
          if (arr[mid] <= target)
              low = mid + 1;
          else
              high = mid;
      }
      return low;
      }
  };
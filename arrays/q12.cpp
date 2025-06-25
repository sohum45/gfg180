// https://leetcode.com/problems/find-all-k-distant-indices-in-an-array/description


class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> res;
        int r=0; // setting up of the pointer to avoid duplicate
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] == key){ // if the key matches 
                // setting up of the range
                int range1 = max(i-k,r);
                int range2 = min(i+k,n-1);
                for(int j= range1;j<=range2;j++){ // inserting indices within the range
                     res.push_back(j);// updating pointer to avoid dulicacy
                } 
                r = range2+1;                
            }
        }
        return res;
    }
};
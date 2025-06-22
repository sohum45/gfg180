// https://leetcode.com/problems/contiguous-array/

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int ans = 0;
        int n= nums.size();
        for(int i=0;i<n;i++){
            int zero = 0, one = 0;
            for(int j=i;j<n;j++){
                if(nums[j] == 0)
                    zero++;
                else
                    one++;
                if(zero == one)
                    ans = max(ans,j-i+1);        
            }
        }
        return ans;
    }
    int findMaxLengthoptimised(vector<int>& nums){
         int n = nums.size();
        int sum = 0, maxLen = 0;
        unordered_map<int,int> map; // unordered map to check for prev idx with same sum
        map[0] =-1; // key = sum ; value = idx

        for(int i=0;i<n;i++){
            if(nums[i] == 0)
                sum -= 1;
            else
                sum +=1;
                
            if(map.find(sum) != map.end()){
                int len = i - map[sum];
                maxLen = max(maxLen,len);
            }
            else{
                map[sum] = i;
             }     
        }
        return maxLen;
    }
};
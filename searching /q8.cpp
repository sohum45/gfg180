// https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/

class Solution {
public:
    bool possible(vector<int>& bloomDay , int day , int m , int k){
        int c = 0 , noOfb = 0 , n= bloomDay.size() ;
        for(int i=0; i< n; i++){
            if(bloomDay[i] <= day){
                c++;
            }
            else{
                noOfb += (c/k);
                c = 0;
            }
        }
        noOfb += (c/k);
        return noOfb >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if(1LL * m * k > n)
        return -1;
        int mini = INT_MAX , maxi = INT_MIN;
        for(int i=0;i<n ; i++){
            mini = min(mini,bloomDay[i]);
            maxi = max(maxi,bloomDay[i]);
        }
        int lo =mini , hi = maxi;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(possible(bloomDay, mid , m , k))
                hi = mid-1;
            else
                lo = mid+1;    
        }
        return lo;
    }
};
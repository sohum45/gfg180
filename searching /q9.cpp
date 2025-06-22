// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/

class Solution {
public:
    int smallestDivisor(vector<int>& arr, int threshold) {
        int n = arr.size();
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            maxi = max(maxi,arr[i]);
        }
        for(int i=1;i<=maxi;i++){ 
            int sum = 0;
            for(int j=0;j<n;j++){
                sum += (arr[j]+i-1)/i; // ceil(arr[j] / i)
            }
        if (sum <= threshold)
            return i; 
}
return -1;
}
// optimised approach
int divison(vector<int>& arr, int divisor){
        int n = arr.size();
        int sum =0;
        for(int j=0;j<n;j++){
            sum += (arr[j]+divisor-1)/divisor;
        }
        return sum;
    }
    int smallestDivisor2(vector<int>& arr, int threshold) {
        int n = arr.size();
        int maxi = INT_MIN , mini = INT_MAX;
        for(int i=0;i<n;i++){
            maxi = max(maxi,arr[i]);
            mini = min(mini,arr[i]);
        }
        int lo = mini , hi = maxi;
        while(lo <=hi){
            int mid = lo+(hi-lo)/2;

            if(divison(arr,mid) <= threshold)
                hi = mid-1; 
            else
                lo = mid+1; // mid is too small — it's making the sum too big.So we need to increase the divisor ⇒ search right.
        }
        return lo;
}
};
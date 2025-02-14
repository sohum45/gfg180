// The cost of stock on each day is given in an array price[]. Each day you may decide to either buy or sell the stock i 
// at price[i], you can even buy and sell the stock on the same day. Find the maximum profit that you can get.
// Note: A stock can only be sold if it has been bought previously and multiple stocks cannot be held on any given day

class Solution {
    public int maximumProfit(int arr[]) {
        // code here
        int max = 0 ;
        for(int i=1;i<arr.length;i++){
            if(arr[i] >arr[i-1])
                max += arr[i] - arr[i-1];
        }
        return max;
    }
}
// Simple way  by iterating through the array once and summing up all the positive differences between consecutive days.
// This works because you can buy and sell on the same day, and you can perform multiple transactions
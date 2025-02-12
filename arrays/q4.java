// **** Given an array of integers arr[] representing a permutation, implement the next permutation that rearranges the numbers into the lexicographically 
// next greater permutation. If no such permutation exists, rearrange the numbers into the lowest possible order (i.e., sorted in ascending order).

class Solution {
    void swap(int arr[],int i , int j){  // swap(int i, int j) only swaps local copies of i and j, which does not modify the original array.
        int temp = arr[i];
        arr[i]= arr[j];
        arr[j]=temp;
    }
    
    void nextPermutation(int[] arr) { 
        // code here
        int i= arr.length-2;
        while(i>=0 && arr[i]>=arr[i+1]) // marking the pivot
            i--;
         
        if(i>=0){        // Finding the successor of the pivot   
            int j= arr.length-1;
            while(arr[i] >= arr[j])
                j--;
            
            swap(arr,i,j);  // swapping the pivot with it's successor  
        }
        
        int l = i+1;
        int r = arr.length-1;
        while(r>l){             // reversing sub array after the pivot
            swap(arr,l,r);
            l++;
            r--;
        }
    }
}
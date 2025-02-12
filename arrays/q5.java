// You are given an array of integer arr[] where each number represents a vote to a candidate.
//  Return the candidates that have votes greater than one-third of the total votes, If there's not a majority vote, return an empty array. 
// Note: The answer should be returned in an increasing format.

class Solution {
    // Function to find the majority elements in the array
    public List<Integer> findMajority(int[] nums) {
       
        List<Integer> list = new ArrayList<>();
        
        Map<Integer, Integer> map = new HashMap<>();
        for(int i = 0; i < nums.length; i++) {
            map.put(nums[i], map.getOrDefault(nums[i], 0) + 1);
        }
        
        for(int key : map.keySet()) {
            if(map.get(key) > nums.length / 3) list.add(key);
        }
        
        Collections.sort(list);
        
        return list;
    }
}
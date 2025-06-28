// https://leetcode.com/problems/isomorphic-strings/

class Solution {
    public static boolean isIsomorphic(String s, String t) {
    if(s.length() != t.length()) return false;
        HashMap<Character,Character> m1 = new HashMap<>();
        HashMap<Character,Character> m2 = new HashMap<>();

        for(int i=0;i<s.length();i++){
            char c1 = s.charAt(i) , c2 = t.charAt(i);
            if(m1.containsKey(c1)){
                if(m1.get(c1) != c2) return false; // .get() = Returns the value to which the specified key is mapped
            }else{
                m1.put(c1,c2);
            }
            if(m2.containsKey(c2)){
                if(m2.get(c2) != c1) return false;
            }else{
                m2.put(c2,c1);
            }
        }
        return true;
}
}
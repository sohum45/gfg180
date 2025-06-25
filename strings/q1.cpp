// https://leetcode.com/problems/remove-outermost-parentheses/description/

class Solution {
public:
    string removeOuterParentheses(string s) {
    string result = "";
    int count = 0; 

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            
            if (count > 0) {
                result += s[i];
            }
            count++;  
        } else { // s[i] == ')'
            count--;  
            if (count > 0) {
                result += s[i];
            }
        }
    }

    return result;
}
    // using stack 
    string removeOuterParenthesesUsingStack(string s){

    }
};
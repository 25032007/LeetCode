class Solution {
    bool helper(string& s, int left, int right){
        if(left >= right) return true; 
        if(!isalnum(s[left])){
            return helper(s, left+1, right);
        }
        if(!isalnum(s[right])){
            return helper(s, left, right - 1);
        }
        if(tolower(s[left]) != tolower(s[right])){
            return false;
        }
        return helper(s, left+1, right-1);
    }
public:
    bool isPalindrome(string s) {
        int n = s.size();
        return helper(s, 0, n-1);
    }
};
class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        int m = n / 2;

        string half = s.substr(0, m);

        sort(half.begin(), half.end());

        string rev_half = half;
        reverse(rev_half.begin(), rev_half.end());

        if(n % 2 == 0){
            return half + rev_half;
        }
        else{
            return half + s[m] + rev_half;
        }
    }
};
class Solution {
    void backtrack(int open, int close, int n, string curr, vector<string>& res){
        //base case: if curr string len reaches 2*n, it's valid combination
        if(curr.size() == 2*n){
            res.push_back(curr);
            return;
        }

        //Add open parenthesis
        if(open < n){
            backtrack(open + 1, close, n, (curr + "("), res);
        }

        //Add closing parenthesis
        if(close < open){
            backtrack(open, close + 1, n, (curr + ")"), res);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        backtrack(0, 0, n, "", res);
        return res;
    }
};
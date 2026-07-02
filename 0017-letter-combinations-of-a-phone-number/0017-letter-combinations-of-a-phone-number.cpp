class Solution {
    vector<string> codes = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    void helper(string digits, string ans, int idx, vector<string>& res){
        if(digits.size() == idx){
            res.push_back(ans);
            return;
        }

        int num = digits[idx] - '0';
        string val = codes[num];

        for(int i=0; i<val.size(); i++){
            helper(digits, ans +  val[i], idx+1, res);
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.empty()) return res;
        helper(digits, "", 0, res);
        return res;
    }
};
class Solution {
    void backtrack(int i, vector<int>& nums, vector<int>& curr, vector<vector<int>>& res){
        int n = nums.size();
        if(i == n){
            res.push_back(curr);
            return;
        }
        curr.push_back(nums[i]);
        backtrack(i+1, nums, curr, res);

        curr.pop_back();
        backtrack(i+1, nums, curr, res);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
          vector<vector<int>> res;
          vector<int> curr;

          backtrack(0, nums, curr, res);

          return res;
    }
};
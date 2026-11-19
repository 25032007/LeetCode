class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        int op1 = nums[n-1] - nums[2]; // change 2 smallest

        int op2 = nums[n-2] - nums[1]; // change 1 smallest, 1 largest

        int op3 = nums[n-3] - nums[0]; // change 2 largest

        return min({op1, op2, op3});
    }
};
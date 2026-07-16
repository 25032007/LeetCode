class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        int op1 = 1, op2 = 1;
        sort(nums.begin(), nums.end());
        op1 = nums[n-1] * nums[n-2] * nums[n-3];
        op2 = nums[0] * nums[1] * nums[n-1];

        return max(op1, op2);
    }
};
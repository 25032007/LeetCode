class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini = nums[0];
        int count = 0;

        for(int num : nums){
            mini = min(mini, num);
        }
        for(int num : nums){
            count += (num - mini);
        }
        return count;
    }
};
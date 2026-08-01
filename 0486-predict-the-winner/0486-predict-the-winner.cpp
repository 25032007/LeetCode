class Solution {
public:
    int maxDiff(vector<int>& nums, int left,int right){
        if(left == right)
          return nums[left];
        int leftscore = nums[left] - maxDiff(nums,left+1,right);
        int rightscore = nums[right] - maxDiff(nums,left,right-1);
        return max(leftscore,rightscore);
    }
    bool predictTheWinner(vector<int>& nums) {
        return maxDiff(nums, 0, nums.size()-1) >= 0;
    }
};
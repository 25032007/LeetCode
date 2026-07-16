class Solution {
    int check(vector<int>& nums, int maxOperation, int mid){
        long long count = 0;
        for(int i=0; i<nums.size(); i++){
            count += (nums[i] - 1)/mid;
        }
        return count <= maxOperation;
    }
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int low = 1, high = 0, ans = 0;
        for(int num: nums){
            high = max(high, num);
        }

        while(low <= high){
            int mid = low + (high - low) / 2;
            if(check(nums, maxOperations, mid)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};
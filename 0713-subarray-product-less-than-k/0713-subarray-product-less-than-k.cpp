class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1) return 0;

        int n = nums.size();
        int ans = 0;
        long long product = 1;
        int left = 0;

        for(int right =0; right < n; right++){
            product *= nums[right];

            while(product >= k && left <= right){
                product /= nums[left];
                left++;
            }
            ans += right - left + 1;
        }
        return ans;
    }
};
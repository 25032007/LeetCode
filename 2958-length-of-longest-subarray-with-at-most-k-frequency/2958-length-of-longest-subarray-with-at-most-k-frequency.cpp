class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int count = 0;
        int left = 0;

        for(int right = 0; right < n; right++){
            mp[nums[right]]++;

            while(mp[nums[right]] > k){
                mp[nums[left]]--;
                left++;
            }

            count = max(count, right - left + 1);
        }
        return count;
    }
};
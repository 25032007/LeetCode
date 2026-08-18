class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        unordered_set<int> freq;

        for(int right=0; right<n; right++){
            if(right - left > k){
                freq.erase(nums[left]);
                left++;
            }
            if(freq.count(nums[right])){
                return true;
            }
            freq.insert(nums[right]);
        }
        return false;
    }
};
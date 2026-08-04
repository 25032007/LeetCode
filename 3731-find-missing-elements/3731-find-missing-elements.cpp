class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        unordered_map<int, int> mp;
        int mini = 100, maxi = 1;

        for(int i=0; i<n; i++){
            mini = min(mini, nums[i]);
            maxi = max(maxi, nums[i]);
            mp[nums[i]]++;
        }

        for(int i=mini; i<=maxi; i++){
            if(mp[i] == 0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;

        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }

        if(k == n){
            return *max_element(nums.begin(), nums.end());
        }

        if(k == 1){
            int maxi = -1;

            for(auto& [num, count] : mp){
                if(count == 1){
                    maxi = max(maxi, num);
                }
            }
            return maxi;
        }

        int ans = -1;
        if(mp[nums[0]] == 1){
            ans = max(ans,nums[0]);
        }
        if(mp[nums[n-1]] == 1){
            ans = max(ans, nums[n-1]);
        }

        return ans;

    }
};
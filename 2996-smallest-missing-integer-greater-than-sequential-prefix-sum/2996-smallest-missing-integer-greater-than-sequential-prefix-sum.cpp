class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0];

        for(int i=1; i<n; i++){
            if(nums[i] == nums[i-1] + 1){
                sum += nums[i];
            }
            else{
                break;
            }
        }

        unordered_map<int, int> mp;
        for(int x: nums){
            mp[x] = true;
        }

        while(mp[sum]){
            sum++;
        }

        return sum;
    }
};
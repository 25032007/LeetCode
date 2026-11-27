class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int product = nums[i] * nums[j];
                mp[product]++;
            }
        }

        int ans = 0;
        for(const auto& [prod, count]: mp){
            if(count >= 2){
                ans += 4 * count * (count - 1);
            }
        }
        return ans;
    }
};
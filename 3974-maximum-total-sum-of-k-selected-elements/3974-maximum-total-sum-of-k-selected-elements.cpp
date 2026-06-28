class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        long long ans = 0;
        int n = nums.size();

        sort(nums.begin(), nums.end(),[](int& a, int& b){
            return a > b;
        });

        for(int i=0; i<k; i++){
            if(mul > 0){
                ans += (long long)nums[i] * mul;
                mul--;
            }
            else{
                ans += nums[i];
            }
        }
        return ans;
    }
};
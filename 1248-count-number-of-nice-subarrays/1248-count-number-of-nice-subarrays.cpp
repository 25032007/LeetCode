class Solution {
    int atMost(vector<int>& nums, int k){
        if(k < 0) return 0;

        int l = 0, countOdd = 0, ans = 0;

        for(int r=0; r<nums.size(); r++){
            if(nums[r] % 2 != 0) countOdd++;

            while(countOdd > k){
                if(nums[l] % 2 != 0){
                    countOdd--;
                }
                l++;
            }
            ans += (r - l + 1);
        }
        return ans;
    }
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};
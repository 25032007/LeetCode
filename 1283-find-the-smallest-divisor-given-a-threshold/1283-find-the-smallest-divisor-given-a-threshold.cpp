class Solution {
    int check(vector<int>& nums, int threshold, int mid){
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += ceil(double(nums[i]) / mid);
        }
        return sum <= threshold;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1, high = 0, ans = 0;

        for(int num : nums){
            high = max(high, num);
        }

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(check(nums, threshold, mid)){
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
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int m = nums.size();
        vector<int> ans(n*2);

        int i=0, j= n, k = 0;
        while(k < m){
            if(k % 2 == 0){
                ans[k] = nums[i];
                k++;
                i++;
            }
            else{
                ans[k] = nums[j];
                k++;
                j++;
            }
        }
        return ans;


    }
};
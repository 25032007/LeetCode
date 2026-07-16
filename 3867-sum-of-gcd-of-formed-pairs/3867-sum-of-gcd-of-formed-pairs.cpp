class Solution {
    int gcd(int a, int b){
        if(b == 0) return a;

        return gcd(b, a%b);
    }
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixGcd;
        int mx = 0;

        for(int i=0; i<n; i++){
            mx = max(mx, nums[i]);
            prefixGcd.push_back(gcd(nums[i], mx));
        }
        sort(prefixGcd.begin(), prefixGcd.end());
        int i=0, j= prefixGcd.size() - 1;
        long long sum = 0;

        while(i < j){
            sum += gcd(prefixGcd[i], prefixGcd[j]);
            i++;
            j--;
        }

        return sum;
    }
};
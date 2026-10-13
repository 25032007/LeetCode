class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();

        vector<long long> a(n);
        for(int i=0; i<n; i++){
            a[i] = abs((long long)nums[i]);
        }
        sort(a.begin(), a.end());

        long long score = 0;
        int mid = n/2;

        for(int i=0; i<mid; i++){
            score -= a[i] * a[i];
        }

        for(int i=mid; i<n; i++){
            score += a[i] * a[i];
        }

        return score;
    }
};
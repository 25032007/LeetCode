class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long oddCount = 0, evenCount = 1;
        long long currPrefix = 0;
        long long total = 0;
        long long MOD = 1e9 + 7;

        for(int num : arr){
            currPrefix += num;

            if(currPrefix % 2 != 0){
                total = (total + evenCount) % MOD;
                oddCount++;
            }
            else{
                total = (total + oddCount) % MOD;
                evenCount++;
            }
        }
        return total;
    }
};
class Solution {
    int check(int m, int n,int k, int mid){
        int count = 0;
        for(int i=1; i<=m; i++){
            count += min(mid/i, n);
        }
        return count >= k;
    }
public:
    int findKthNumber(int m, int n, int k) {
        int low = 1, high = m*n;
        int ans = 0;

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(check(m, n, k, mid)){
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
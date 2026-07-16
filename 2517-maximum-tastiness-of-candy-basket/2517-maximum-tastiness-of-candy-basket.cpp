class Solution {
    //Can I choose k element or not 
    int check(vector<int>& price, int k, int mid){
        int count = 1, last = price[0];
        int n = price.size();
        for(int i=0; i<n; i++){
            if(price[i]- last >= mid){
                last = price[i];
                count++;
            }
        }
        return count >= k;
    }
public:
    int maximumTastiness(vector<int>& price, int k) {
        int n = price.size();
        sort(price.begin(), price.end());
        int low = 0, high = price[n-1] - price[0], ans = 0;

        while(low <= high){
            int mid = low + (high - low)/2;
            if(check(price, k, mid)){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans;
    }
};



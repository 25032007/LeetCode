class Solution {
    int check(vector<int>& quantities, int n, int mid){
        int storeNeeds = 0;
        for(int i=0; i<quantities.size(); i++){
            storeNeeds += (quantities[i] + mid - 1)/mid; //storeNeeds += ceil(double(quantities[i])/mid)
        }
        return storeNeeds <= n;
    }
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        int low = 1, high = 0, ans =0;
        for(int num : quantities){
            high = max(high, num);
        }

        while(low <= high){
            int mid = low + (high - low)/2;

            if(check(quantities, n, mid)){
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
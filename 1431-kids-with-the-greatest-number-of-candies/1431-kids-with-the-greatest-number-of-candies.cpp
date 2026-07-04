class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> res(n);
        int greater = res[0];

        for(int i=0; i<n; i++){
            greater = max(greater, candies[i]);
        }
        for(int i=0; i<n; i++){
            if(candies[i] + extraCandies >= greater){
                res[i] = true;
            }
            else{
                res[i] = false;
            }
        }
        return res;
    }
};
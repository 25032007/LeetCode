class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long ans = 0;

        long long common = min(need1, need2);

        ans += common * min((long long)costBoth, (long long) cost1 + cost2);

        need1 -= common;
        need2 -= common;

        if(need1 > 0){
            ans += (long long) need1 * min((long long) costBoth, (long long) cost1);
        }

        if(need2 > 0){
            ans += (long long) need2 * min((long long) costBoth, (long long) cost2);
        }

        return ans;
    }
};
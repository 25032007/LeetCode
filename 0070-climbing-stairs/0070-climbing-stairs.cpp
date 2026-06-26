class Solution {
    int fib(int n, vector<int>& memo){
        if(n <= 1) return 1;

        if(memo[n] != -1) return memo[n];

        return memo[n] = fib(n-1,memo) + fib(n-2, memo);
    }
public:
    int climbStairs(int n) {
        vector<int> memo(n+1, -1);
        return fib(n, memo);
    }
};
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        long long MOD = 1e9 + 7;
        stack<int> st;

        vector<int> leftmin(n);
        vector<int> rightmin(n);

        for(int i=0; i<n; i++){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            if(st.empty()) leftmin[i] = -1;
            else leftmin[i] = st.top();

            st.push(i);
        }

        while(!st.empty()) st.pop();

        for(int i=n-1; i>=0; i--){
            while(!st.empty() && arr[st.top()] > arr[i]){
                st.pop();
            }
            if(st.empty()) rightmin[i] = n;
            else rightmin[i] = st.top();

            st.push(i);
        }
        long long ans = 0;
        for(int i=0; i<n; i++){
            long long left = i - leftmin[i];
            long long right = rightmin[i] - i;
            long long total = (left * right) % MOD;
            ans = (ans + total * arr[i]) % MOD;
        }
        return ans;
    }
};
class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size();
        stack<int> st;
        vector<int> visited(n, 0);

        for(int i=0; i<n; i++){
            if(s[i] == '('){
                st.push(i);
            }
            else{
                if(!st.empty()){
                    visited[i] = 1;
                    visited[st.top()] = 1;
                    st.pop();
                }
            }
        }

        int count = 0, maxi = 0;
        for(int x: visited){
            if(x == 1){
                count++;
            }
            else{
                count = 0;
            }
            maxi = max(maxi, count);
        }
        return maxi;
    }
};
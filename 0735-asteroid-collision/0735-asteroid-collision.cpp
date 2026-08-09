class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> st;
        vector<int> res;

        for(int i=0; i<n; i++){
            if(asteroids[i] > 0) st.push(asteroids[i]);

            else{
                while(!st.empty() && st.top() > 0 && abs(asteroids[i]) > st.top()){
                    st.pop();
                }

                if(st.empty() || st.top() < 0){
                    st.push(asteroids[i]);
                }
                if(!st.empty() && abs(asteroids[i]) == st.top()) {
                    st.pop();
                }
            }
        }

        while(!st.empty()){
            int temp = st.top();
            st.pop();
            res.push_back(temp);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
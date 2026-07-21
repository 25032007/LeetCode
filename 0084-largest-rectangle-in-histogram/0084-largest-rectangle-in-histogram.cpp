class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        vector<int> prevSmaller(n);
        vector<int> nextSmaller(n);

        for(int i=0; i<n; i++){
            while(!st.empty() && heights[i] <= heights[st.top()]){
                st.pop();
            }
            if(st.empty()) prevSmaller[i] = -1;
            else prevSmaller[i] = st.top();

            st.push(i);
        }

        while(!st.empty()) st.pop();

        for(int i=n-1; i>=0; i--){
            while(!st.empty() && heights[i] <= heights[st.top()]){
                st.pop();
            }
            if(st.empty()) nextSmaller[i] = n;
            else nextSmaller[i] = st.top();

            st.push(i);
        }

        int maxArea = 0;
        for(int i=0; i<n; i++){
            int width = nextSmaller[i] - prevSmaller[i] - 1;
            //width = right - left - 1
            int area = width * heights[i];
            maxArea = max(maxArea, area);
        }

        return maxArea;
    }
};
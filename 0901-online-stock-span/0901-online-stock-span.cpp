class StockSpanner {
    private:
        stack<pair<int, int>> st;
        int currDay;
public:
    StockSpanner() {
        currDay = 0;
    }
    
    int next(int price) {

        while(!st.empty() && st.top().first <= price){
            st.pop();
        }

        int ans;
        if(st.empty()) ans = currDay + 1;
        else ans = currDay - st.top().second;

        st.push({price, currDay});
        currDay++;

        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
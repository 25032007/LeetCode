class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        int ans = 0;

        stack<string> st;

        for(int i=0; i<n; i++){
            if(operations[i] == "C") st.pop();

            else if(operations[i] == "D"){
                int temp = stoi(st.top());
                st.push(to_string(temp*2));
            }

            else if(operations[i] == "+"){
                int temp1 = stoi(st.top());
                st.pop();
                int temp2 = stoi(st.top());

                int sum = temp1 + temp2;
                st.push(to_string(temp1));
                st.push(to_string(sum));
            }

            else{
                st.push(operations[i]);
            }
        }

        while(!st.empty()){
            int temp = stoi(st.top());
            ans += temp;
            st.pop();
        }
        return ans;
    }
};
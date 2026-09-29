class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;
        int n = s.size();
        string ans;

        for(char c: s){
            string temp;
            if(c != ')'){
                st.push(c);
            }

            if(c == ')'){
                while(st.top() != '('){
                    char rev = st.top();
                    temp.push_back(rev);
                    st.pop();
                }
                st.pop();
                for(char ch: temp){
                    st.push(ch);
                }
            }
        }

        while(!st.empty()){
            char temp = st.top();
            ans.push_back(temp);
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
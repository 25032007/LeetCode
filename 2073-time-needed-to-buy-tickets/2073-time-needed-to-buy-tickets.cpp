class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        queue<pair<int, int>> q;

        for(int i=0; i<n; i++){
            q.push({i, tickets[i]});
        }

        int time = 0;
        
        while(!q.empty()){
            auto [idx, remaining] = q.front();
            q.pop();

            time++;
            remaining--;

            if(idx == k && remaining == 0){
                return time;
            }

            if(remaining > 0){
                q.push({idx, remaining});
            }
        }
        return time;
    }
};
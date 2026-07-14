class Solution {
    int check(vector<int>& position, int m, int mid){
        //Magnetic Force me hum m balls dal shakte hei ki nahi
        //Magnetic force me binary search on answer lag raha hei

        int n = position.size();
        int countBalls = 1, last = position[0];

        for(int i=1; i<n; i++){
            if(position[i] >= mid + last){
                countBalls++;
                last = position[i];
            }
        }
        return countBalls >= m;
    }
public:
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(), position.end());
        int low = 1, high = position[n-1] - position[0];
        int ans = 0;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(check(position, m ,mid)){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans;
    }
};
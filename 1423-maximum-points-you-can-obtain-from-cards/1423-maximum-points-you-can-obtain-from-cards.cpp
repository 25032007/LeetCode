class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int sum = 0;

        for(int i=0; i<n; i++){
            sum += cardPoints[i];
        }

        if(k == n) return sum;

        int windowsize = n - k;
        int currsum = 0;

        for(int i=0; i<windowsize; i++){
            currsum += cardPoints[i];
        }

        int minsum = currsum;

        for(int i=windowsize; i<n; i++){
            currsum += cardPoints[i] - cardPoints[i - windowsize];
            minsum = min(minsum, currsum);
        }

        return sum - minsum;
    }
};
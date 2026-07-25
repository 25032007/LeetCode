class Solution {
public:
    int maxProduct(int n) {
        vector<int> arr;

        while(n > 0){
            int temp = n % 10;
            n /= 10;
            arr.push_back(temp);
        }

        sort(arr.begin(), arr.end());

        return arr[arr.size()-1] * arr[arr.size() - 2];
    }
};
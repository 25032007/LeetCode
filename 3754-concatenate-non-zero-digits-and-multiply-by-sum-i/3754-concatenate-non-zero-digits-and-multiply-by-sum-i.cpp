class Solution {
public:
    long long sumAndMultiply(int n) {
        int x = 0;
        int placeholder = 1;
        int sum = 0;
        while(n > 0){
            int temp = n % 10;
            if(temp != 0){
                x += temp * placeholder;
                sum += temp;
                placeholder *= 10;
            }
            n /= 10;
        }
        // cout << x << endl;
        // cout << sum << endl;
        return (long long)x * sum;
    }
};
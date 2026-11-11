class Solution {
public:
    int countDigits(int num) {
        int temp = num, count = 0;

        while(temp > 0){
            int last = temp % 10;
            if(num % last == 0) count++;
            temp /= 10;
        }
        return count;
    }
};
class Solution {
public:
    bool isSameAfterReversals(int num) {
        int dup = 0;
        while(num > 0){
            dup += num % 10;
            if(dup == 0) return false;
            num/=10;
        }
        return true;
    }
};
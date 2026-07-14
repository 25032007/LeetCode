class Solution {
public:
    bool isUgly(int n) {
        if(n < 1) return false;
        
        for(int i : {2, 3, 5}){
            while(n % i == 0){
                n /= i;
            }
        }
        return n == 1;
    }
};
class Solution {
public:
    bool canAliceWin(int n) {
      int removeStones = 10;
      int turns = 0;

      while(n >= removeStones){
        n -= removeStones;
        removeStones--;
        turns++;
      } 

      return turns % 2 == 1;
    }
};
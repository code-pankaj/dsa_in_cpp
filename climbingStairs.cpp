class Solution {
public:
    int memo[50];
    int totalWays(int num){
        int ways ;
        if(memo[num] != 0){
            return memo[num];
        }
        else{
        if(num == 1){
            return 1;
        }
        if(num == 2){
            ways = 2 ;
            memo[num] = ways;
        }
        else{
            ways = totalWays(num-1) + totalWays(num - 2);
            memo[num] = ways;
        }
        return ways;
        }
    }
    int climbStairs(int n) {
        int numberOfWays = totalWays(n);
        return numberOfWays;
    }
};
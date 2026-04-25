/*
SUBMITTED CODE LEETCODE HIT TLE (NEED DP)
class Solution {
public:
    long long climbStairs(long long n) {
        if(n < 0){
            return 0;
        }

        if(n == 0){
            return 1;
        }

        int ans = climbStairs(n - 1) + climbStairs(n - 2);
        return ans;
        
    }
};

*/
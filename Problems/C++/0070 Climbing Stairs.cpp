class Solution {
public:
    int climbStairs(int n) {
        // Method 1
        // if(n < 4)  return n;
        // if(n == 4)  return 5;
        // if(n == 5)  return 8;
        // int totalSteps = climbStairs(n-1) + climbStairs(n-2);
        // return totalSteps;
        
        // Method 2 (Dynamic Progeramming)
        if(n < 4)   return n;
        int nr[n+1];
        nr[1] = 1;
        nr[2] = 2;
        for(int i = 3; i <= n; i++){
            nr[i] = nr[i-1] + nr[i-2];
        }
        return nr[n];

    }
};
class Solution {
public:
    int tribonacci(int n) {
        // Method 1
        // if(n == 0)  return 0;
        // else if(n < 3)   return 1;
        // else if( n == 4)    return 4;
        // else if(n == 5)     return 7;
        // else if(n == 6)     return 13;
        // else if(n == 25)    return 1389537;
        // int nr = tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
        // return nr;

        // Method 2
        if(n == 0)  return 0;
        else if(n < 3)  return 1;

        int arr[n+1];
        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 1;
        for(int i = 3; i <= n; i++){
            arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
        }
        return arr[n];
    }
};
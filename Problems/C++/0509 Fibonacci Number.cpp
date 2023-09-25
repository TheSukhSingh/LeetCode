class Solution {
public:
    int fib(int n) {
        // Method 1
        // if(n < 2)   return n;
        // int nr = fib(n-1) + fib(n-2);
        // return nr;

        // Method 2
        if(n < 2)   return n;
        int arr[n+1];
        arr[0] = 0, arr[1] = 1;
        for(int i = 2; i <= n; i++){
            arr[i] = arr[i-1] + arr[i-2];
        }
        return arr[n];
        
    }
};
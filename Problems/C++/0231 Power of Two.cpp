class Solution {
public:
    bool isPowerOfTwo(int n) {
        // Method 1

        if(n == 1 || n == 2)    return true;
        long temp = 2;
        for(int i = 0; ;i++){
            temp = temp << 1;
            if(temp== n)    return true;
            else if(temp > n)   break;
        }
        return false;

        // Method 2
        
        // if(n<=0)
        //         return false;
        //     return ((n & (n-1))==0);
    
    
    
    
    }
};
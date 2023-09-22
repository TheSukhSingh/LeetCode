class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 1 || n == 4)    return true;
        else if (n == 2 || n == 3)  return false;
        long temp = 4;
        for(int i = 0; ;i++){
            temp = temp << 2;
            if(temp== n)    return true;
            else if(temp > n)   break;
        }
        return false;

    }
};
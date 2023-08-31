class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)   return false;

        if(x >= 0 && x < 10)    return true;

        int tempx = x;
        long long y = 0;

        while (tempx != 0){
            int temp = tempx % 10;
            y = y * 10 + temp;
            tempx /= 10;
        }

        return (x == y);

    }  
    
};
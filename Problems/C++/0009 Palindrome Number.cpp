class Solution {
public:
    bool isPalindrome(int x) {
        // Method 1 (Normal Method)

        // if(x < 0)   return false;
        // else if(10 > x && x > -1) return true;

        // int temp = x;
        // long temp2 = 0;
        // while(temp != 0){
        //     temp2 = temp2 * 10 + temp % 10;
        //     temp /= 10;
        // }
        // return x == temp2;

        // Method 2 (Using Big Brain)
        if(x >= 0 && x < 10)    return true;
        else if(x < 0 || x % 10 == 0) return false;
        int reversed = 0;
        while(x > reversed){
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        return (x == reversed || x == reversed/10);

    }
};
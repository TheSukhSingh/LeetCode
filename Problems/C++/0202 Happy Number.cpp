class Solution {
public:
    int nr(int n){
        int sq = 0;
        while(n > 0){
            int temp = n % 10;
            n/=10;
            sq+= (temp*temp);
        }
        return sq;
    }

    bool isHappy(int n) {
        int tries = 0;
        while(n > 1){
            n = nr(n);
            tries++;
            if(tries > 10)  break;
        }
        if(n == 1)  return true;
        else return false;
    }



};
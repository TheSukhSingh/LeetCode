class Solution {
public:
    int mySqrt(int x) {
        // Method 1
        // long long i = 1;
        // while(i * i <= x){
        //     i++;
        // }
        // if(i*i == x)    return i;
        // else return i-1;

        // Method 2
        int s = 1;
        int e = x;
        long long mid = s + (e - s)/2;

        while(s < e){
            if(mid*mid == x)    return mid;
            else if(mid*mid > x)    e = mid - 1;
            else s = mid + 1;

            mid = s + (e - s)/2;
        }
        if(mid * mid > x)   return mid-1;
        else return mid;
        
    }
};
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        // Method 1
        // for(int i = n; i >= 0; i--){
        //     if(!isBadVersion(i)) return i+1;
        // }
        // return -1;

        // Method 2
        int start = 1, end = n;

        while(start < end){
            int mid = start + (end - start)/2;
            if(isBadVersion(mid))   end = mid;
            else    start = mid + 1;
        }
        return start;

        
    }
};
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // Method 1 (Using vector functions)

        // sort(nums.begin(), nums.end());
        // int nr = 0;
        // for(int i = 0; i < nums.size(); i++){
        //     if(nums[i] == nr)   nr++;
        //     else return nr;
        // }
        // return nr;

        // Method 2

        int n= nums.size() * (nums.size() + 1) / 2;
        for(int i = 0; i < nums.size(); i++){
            n -= nums[i];
        }
        return n;
        
    }
};
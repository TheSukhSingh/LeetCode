class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // Method 1 - Using maps

        // unordered_map<int, int> count;
        // for(int num: nums)      count[num]++;
        // for(auto pair : count)
        //     if(pair.second == 1)   return pair.first;
        // return -1;

        // Method 2 - Sorting the vector

        // sort(nums.begin(), nums.end());
        // for(int i = 0; i < nums.size() - 1; i++){
        //     if(nums[i] == nums[i+1])    i++;
        //     else return nums[i];
        // }
        // return nums.at(nums.size() - 1);

        // Method 3 - Using Bitwise XOR Operator
        int a = 0;
        for(auto x : nums){
            a^= x;
        }
        return a;
    }
};
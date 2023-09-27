class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // Method 1
        // if(nums.size() < 2)    return 0;
        // else if(nums.size() == 2){
        //     if(nums[0] == nums[1])  return 1;
        //     else return 0;
        // }
        // int count = 0;
        // int i = 0, j = 1;
        // while(j != nums.size()){
        //     while(j != nums.size()){
        //         if(nums[i] == nums[j]){
        //             count++;
        //         }
        //         j++;
        //     }
        //     i++;
        //     j = i + 1;
        // }
        // return count;

        // Method 2
        unordered_map<int,int> a;
        for(auto x: nums)
            a[x]++;
        int ans = 0;
        for(auto x: a)
            ans += (x.second * (x.second - 1))/2;
        return ans;
        
        
    }
};
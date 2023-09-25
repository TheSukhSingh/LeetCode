class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // Method 1
        // int count = 0;
        // for(int i = 0; i < nums.size(); i++){
        //     if(nums.at(i) == 0){
        //         nums.erase(nums.begin() + i);
        //         i--;
        //         count++;
        //     }
        // }
        // while(count > 0){
        //     count--;
        //     nums.push_back(0);
        // }

        // Method 2
        int i = 0, j = 1;

        while(j != nums.size()){
            if(nums[i] != 0){
                i++; j++;
            }
            else if(nums[i] == 0){
                while(j != nums.size()){
                    if(nums[j] == 0)    j++;
                    else{
                        nums[i] = nums[j];
                        nums[j] = 0;
                        i++; j++;
                    }
                }
            }





        }

        
        
    }
};
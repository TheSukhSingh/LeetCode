class Solution {
public:
    int focc(vector<int> nums, int target){
        int s = 0, e = nums.size() - 1;
        int mid = s + (e-s)/2;
        int foc = -1;
        while(s<=e){
            if(nums[mid] == target){
                foc = mid;
                e = mid - 1;
            }
            else if(nums[mid] > target){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
            mid = s + (e-s)/2;
        }
        return foc;
    }
    int locc(vector<int> nums, int target){
        int s = 0, e = nums.size() - 1;
        int mid = s + (e-s)/2;
        int foc = -1;
        while(s<=e){
            if(nums[mid] == target){
                foc = mid;
                s = mid + 1;
            }
            else if(nums[mid] > target){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
            mid = s + (e-s)/2;
        }
        return foc;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int f = focc(nums, target);
        int l = locc(nums, target);
        vector<int> sol;
        sol.push_back(f);
        sol.push_back(l);
        return sol;
        
    }
};
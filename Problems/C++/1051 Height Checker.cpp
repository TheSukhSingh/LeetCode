class Solution {
public:
    int heightChecker(vector<int>& heights) {
        // Method 1
        vector<int> fin = heights;
        sort(fin.begin(), fin.end());
        int count = 0;
        for(int i = 0; i < heights.size(); i++)
            if(heights[i] != fin[i])
                count++;
        return count;
        
    }
};
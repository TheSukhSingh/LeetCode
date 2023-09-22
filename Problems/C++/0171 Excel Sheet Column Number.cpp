class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long col = 1;
        long long nr = 0;
        for(int i = columnTitle.length()-1; i >= 0; i--){
            int temp = columnTitle[i] - 'A';
            temp++;
            nr += temp * col;
            col *= 26;
        }
        return nr;
        
    }
};
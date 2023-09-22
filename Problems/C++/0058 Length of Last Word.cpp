class Solution {
public:
    int lengthOfLastWord(string s) {
        int aa = s.length() - 1;
        for(int i = s.length() - 1; i >= 0; i--){
            if(s[i] == 32)  aa--;
            else break;
        }
        int len = 0;
        for(int i = aa; i >= 0; i--){
            if(s[i] != 32) len++;
            else break;
        }
        return len;
    }
};
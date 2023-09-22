class Solution {
public:
    bool isPalindrome(string s) {
        // Method 1
        // string a, b;
        // for(int i = 0; i < s.length(); i++){
        //     if(s[i] >= 97 && s[i] <= 122){
        //         a += s[i];
        //     }
        //     else if(s[i] >= 65 && s[i] <= 90){
        //         a += tolower(s[i]);
        //     }
        //     else if(s[i] >= 48 && s[i] <= 57){
        //         a += s[i];
        //     }
        // }
        // b = a;
        // reverse(begin(b), end(b));
        // return a == b;

        // Method 2
        int start = 0;
        int end = s.length() - 1;
        while(start <= end){
            if(!isalnum(s[start])){  start++; continue;}
            if(!isalnum(s[end])){    end--; continue;}
            if(tolower(s[start]) != tolower(s[end]))    return false;
            else{
                start++;
                end--;
            }
            
            
        }
        return  true;

    }
};
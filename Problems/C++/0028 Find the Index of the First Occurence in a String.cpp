class Solution {
public:
    int strStr(string haystack, string needle) {
        // Method 1

        // if(haystack.length() < needle.length()) return -1;
        // if(haystack.length() == needle.length()){
        //     if(haystack == needle)  return 0;
        //     else return -1;
        // }
        // for(int i = 0; i < haystack.length() - needle.length() + 1; i++){
        //     string temp = haystack.substr(i, needle.length());
        //     if(temp == needle)  return i;
        // }
        // return -1;

        // Method 2

        int index = haystack.find(needle);
        return (index != -1) ? index : -1;
        
    }
};
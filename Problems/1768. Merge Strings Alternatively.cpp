class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int size1 = word1.length();
        int size2 = word2.length();
        int max_size = size1 > size2 ? size1 : size2;
        string s;
        for(int i = 0; i < max_size; i++){
            if(i < size1){
                s += word1[i];
            }
            if(i < size2){
                s += word2[i];
            }
        }
        return s;
        
    }
};
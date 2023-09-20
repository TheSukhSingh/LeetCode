class Solution {
public:
    int romanToInt(string s) {
        vector<int> romans;
        for(int i = 0; i < s.length(); i++){
            switch(s[i]){
                case 'I': romans.push_back(1);
                    break;
                case 'V': romans.push_back(5);
                    break;
                case 'X': romans.push_back(10);
                    break;
                case 'L': romans.push_back(50);
                    break;
                case 'C': romans.push_back(100);
                    break;
                case 'D': romans.push_back(500);
                    break;
                case 'M': romans.push_back(1000);
                    break;  
            }
        }
        int nr = 0;
        for(int i = 0; i < romans.size() - 1; i++){
            if(romans[i] < romans[i+1]){
                nr -= romans[i];
            }
            else{
                nr += romans[i];
            }
        }
        nr += romans[romans.size() - 1];
        return nr;
    }
};
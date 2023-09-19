class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length() != t.length())    return false;

        // Solution 1
        
        // vector<int> s_freq(26,0);
        // vector<int> t_freq(26,0);
        // for(int i = 0; i < s.length(); i++){
        //     s_freq[s[i] - 'a']++;
        //     t_freq[t[i] - 'a']++;
        // }
        // return s_freq == t_freq;

        // Solution 2

        // map<char, int> map1, map2;
        // for(int i = 0; i < s.length(); i++){
        //     map1[s[i]]++;
        //     map2[t[i]]++;
        // }
        // for(auto i: map1){
        //     if(i.second != map2[i.first])   return false;
        // }
        // return true;

        // Solution 3

    //     sort(s.begin(),s.end());
    //     sort(t.begin(),t.end());

    //     return (s==t);

    }
};
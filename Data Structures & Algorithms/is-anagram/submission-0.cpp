class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = s.length();
        vector<int> h1(26);
        vector<int> h2(26);


        for(char ch : s){
            h1[ch-'a']++;
        }
        for(char ch : t){
            h2[ch-'a']++;
        }

        if(h1==h2) return true;
        return false;


        


    }
};

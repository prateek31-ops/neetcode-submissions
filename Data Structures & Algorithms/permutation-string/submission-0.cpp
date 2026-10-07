class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> hash1(26) , hash2(26);
        for(char ch : s1){
            hash1[ch-'a']++;
        }

        int l=0 , r=0;
        while(r < s2.length()){
            hash2[s2[r]-'a']++;

            if(r-l+1 > s1.length()){
                hash2[s2[l]-'a']--;
                l++;
            }

            if(r-l+1 == s1.length()){
                if(hash1 == hash2) return true;
            }

            r++;
        }
        return false;
    }
};

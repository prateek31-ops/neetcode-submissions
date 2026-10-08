class Solution {
public:
    bool check(vector<int>& h1 , vector<int>& h2){
        for(int i=0 ; i<256 ; i++){
            if(h1[i] < h2[i]) return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        int l=0,r=0;
        vector<int> h1(256);
        vector<int> h2(256);

        for(int i=0 ; i<t.length() ; i++){
            h2[t[i]]++;
        }
        int minlen = INT_MAX;
        int start = -1;

        while(r<s.length()){
            h1[s[r]]++;

            while(check(h1,h2)){
                if(r-l+1 < minlen){
                    minlen = r-l+1;
                    start = l;
                }
                h1[s[l]]--;
                l++;
            }
            r++;
        }
        if(start == -1) return "";

        return s.substr(start,minlen);
    }
};

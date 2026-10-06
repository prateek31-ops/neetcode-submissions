class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int m = s.length();
        unordered_map<char , int> mpp;
        int ans = 0;
        int l=0 , r=0;
        while(r<m){
            if(mpp.find(s[r]) != mpp.end()){
                l=max(l,mpp[s[r]]+1);
            }
            mpp[s[r]] = r;
            ans = max(ans , r-l+1);
            r++;
        }

        return ans;
    }
};

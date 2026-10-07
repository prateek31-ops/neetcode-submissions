class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        int l=0 ,r=0;
        int ans = 0;
        unordered_map<char ,int> mpp;
        int mostfreq = 0;

        while(r<n){
            mpp[s[r]]++;
            mostfreq = max(mostfreq,mpp[s[r]]);
            while( (r-l+1) - mostfreq > k){
                mpp[s[l]]--;
                l++;
            }
            ans = max(ans , r-l+1);
            r++;
        }

        return ans;
    }
};

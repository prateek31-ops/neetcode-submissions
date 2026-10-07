class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        int l=0 , r=0;
        int mostfreq=0;
        int ans = 0;
        unordered_map<char , int> count;
        while(r<n){
            count[s[r]]++;
            mostfreq = max(mostfreq,count[s[r]]);

            while( (r-l+1) - mostfreq > k){
                count[s[l]]--;
                l++;
            }

            ans = max(r-l+1 , ans);
            r++;
        }
        return ans;
    }
};

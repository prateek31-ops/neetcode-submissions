class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int m = s.length();
        unordered_set<int> st;
        int ans = 0;
        int l=0 , r=0;
        while(r<m){
            while(st.find(s[r]) != st.end()){
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            ans = max(ans , r-l+1);
            r++;
        }

        return ans;
    }
};

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int> , vector<string>> mpp;

        for(auto s : strs){
            vector<int> h(26);

            for(int i=0 ; i<s.length() ; i++){
                h[s[i]-'a']++;
            }

             mpp[h].push_back(s);
        }

        vector<vector<string>> ans;

        for(auto it:mpp){
            ans.push_back(it.second);
        }

        return ans;
    }
};

class Solution {
public:

    string encode(vector<string>& strs) {
        string en = "";
        for(auto s: strs){
            int sz = s.length();
            en += to_string(sz) + "#" + s;
        }
        return en;
    }

    vector<string> decode(string s) {
        int i=0;
        vector<string> ans;
        while(i<s.size()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int len = stoi(s.substr(i, (j-1) - i + 1));
            i=j+1;
            
            ans.push_back(s.substr(i,len));
            i = i + len;
        }
        return ans;
    }
};

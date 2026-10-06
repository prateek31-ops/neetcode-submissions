class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";

        for(int i=0 ; i<strs.size() ; i++){
            int sz = strs[i].size();
            ans+= to_string(sz) + "#";
            ans+= strs[i];
        }

        return ans;

    }

    vector<string> decode(string s) {
        vector<string> res;
        int i=0;
        
        while(i < s.size()){
            int j=i;
            while(s[j] != '#'){
                j++;
            }
            int len = stoi(s.substr(i, (j-1) - i + 1 ));
            i=j+1;
            j=i+len;
            res.push_back(s.substr(i,len));
            i=j;
        }

        return res;
    }
};

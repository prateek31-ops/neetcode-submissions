class Solution {
public:
    bool check(char ch){
        if( (ch>= 'a' && ch<='z') || (ch>='A' && ch<='Z' || (ch>='0' && ch<='9')))return true;

        return false;
    }
    bool isPalindrome(string s) {
        int n = s.length();
        int i=0;
        int j=n-1;

        while(i<j){
            while(i<n && check(s[i]) == false) i++;
            while(j>=0 && check(s[j]) == false) j--;
            if(i>j) return true;
            if( tolower(s[i]) != tolower(s[j])) return false;
            i++;
            j--;
        }

        return true;
    }
};

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin() , nums.end());
        int longest = 0;

        // if(st.find(num-1) == st.end()) It means we only start counting when num is the first element of a consecutive sequence. 


        for(int num : st){
            if(st.find(num-1) == st.end()){
                int length = 1;
                while(st.find(num+length) != st.end()) length++;
                longest = max(longest , length);
            }

        }

        return longest;
    }
};

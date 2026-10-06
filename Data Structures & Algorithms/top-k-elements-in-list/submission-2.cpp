class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> bucket(n+1);
        unordered_map<int,int> mpp;

        for(int i=0 ; i<n ; i++){
            mpp[nums[i]]++;
        }


        for(auto [x , cnt] : mpp){
            bucket[cnt].push_back(x);
        }
        vector<int> ans;
        for(int i=n ; i>0 && k > 0 ; i--){
            while(!bucket[i].empty() && k > 0){
                ans.push_back(bucket[i].back());
                bucket[i].pop_back();
                k--;
            }
        }

        return ans;
    }
};


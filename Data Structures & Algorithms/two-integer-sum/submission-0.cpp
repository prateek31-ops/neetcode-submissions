class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int , vector<int>> mpp;
        for(int i=0 ; i<n ; i++){
            mpp[nums[i]].push_back(i);
        }

        for(int i=0 ; i<n ; i++){
            int x = target-nums[i];

            if(mpp.find(x) != mpp.end()){
                for(int j=0 ; j<mpp[x].size() ; j++){
                    int k = mpp[x][j];
                    if(k == i) continue;
                    if(i<k) return {i,k};
                    else return {k,i};
                }
            }
        }

        return {-1,-1};
    }
};

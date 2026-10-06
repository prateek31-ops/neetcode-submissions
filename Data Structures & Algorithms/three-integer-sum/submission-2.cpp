class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        vector<vector<int>> ans;
        
        for(int i=0 ; i<n ; i++){
            if(nums[i] > 0) break; // as all positve so cant be zero
            if(i>0 && nums[i] == nums[i-1]) continue; // skipping i duplicates
            int j = i+1;
            int k = n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==0){
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j] ==nums[j-1]) j++; // doing this after as we like if all are duplicate all will get skipeed if we did this at start
                    while(j<k && nums[k] == nums[k+1]) k--;
                }
                else if(sum>0){
                    k--;
                }
                else{
                    j++;
                }
            }
        }

        return ans;
    }
};

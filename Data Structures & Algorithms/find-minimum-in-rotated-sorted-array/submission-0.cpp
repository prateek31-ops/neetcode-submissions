class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int l=0;
        int r = n-1;
        int mini = INT_MAX;

        while(l<=r){
            if(nums[l] < nums[r]){
                mini = min(mini,nums[l]);
                break;
            }
            int m = l + (r-l)/2;
            mini = min(mini,nums[m]);
            if(nums[m] >= nums[l]){
                l=m+1;
            }
            else{
                r=m-1;
            }
        }
        return mini;
    }
};

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l=0 , r=n-1;
        int lmax = height[0] , rmax=height[n-1];
        int ans = 0;
        while(l<r){
            if(lmax<=rmax){
                ans += (lmax-height[l])*1;
                l++;
                lmax = max(lmax,height[l]);
            }
            else{
                ans += (rmax-height[r])*1;
                r--;
                rmax = max(rmax,height[r]);
            }
        }
        return ans;
    }
};

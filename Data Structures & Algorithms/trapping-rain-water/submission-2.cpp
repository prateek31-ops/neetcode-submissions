class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l=0 , r=n-1;
        int lmax = height[0] , rmax=height[n-1];
        int ans = 0;
        while(l<r){
            if(lmax<=rmax){
                l++;
                lmax = max(lmax,height[l]);
                ans += (lmax-height[l])*1;
            }
            else{
                r--;
                rmax = max(rmax,height[r]);
                ans += (rmax-height[r])*1;
            }
        }
        return ans;
    }
};

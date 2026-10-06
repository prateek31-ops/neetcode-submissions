class Solution {
public:
    int trap(vector<int>& height) {
        // if(height.size() == 0) return 0;
        int n = height.size();
        int l=0 , r=n-1;
        int lmax = height[l] , rmax = height[r];
        int ans = 0;

        while(l<r){
            if(lmax<=rmax){
                l++;
                lmax = max(lmax,height[l]);
                ans += (lmax - height[l])*1;
            }
            else{
                r--;
                rmax = max(rmax,height[r]);
                ans+= (rmax - height[r])*1;
            }
        }

        return ans;
    }
};

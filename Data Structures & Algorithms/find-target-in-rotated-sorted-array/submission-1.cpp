
class Solution {
public:
    int bsearch(vector<int>& nums, int target, int low, int high) {
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                return mid;
            } 
            else if (nums[mid] < target) {
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n - 1;

        while (l < r) {
            int m = l + (r - l) / 2;

            if (nums[m] > nums[r]) {
                l = m + 1;
            } 
            else {
                r = m;
            }
        }

        int pivot = l;

        int result = bsearch(nums, target, 0, pivot - 1);

        if (result != -1) {
            return result;
        }

        return bsearch(nums, target, pivot, n - 1);
    }
};

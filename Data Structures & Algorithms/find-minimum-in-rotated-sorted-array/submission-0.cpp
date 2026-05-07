class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, h = nums.size() - 1;
        int res = nums[0];

        while (l <= h) {
            // left half is already sorted, min is nums[l]
            if (nums[l] <= nums[h]) {
                res = min(res, nums[l]);
                break;
            }

            int mid = l + (h - l) / 2;
            res = min(res, nums[mid]);

            if (nums[mid] >= nums[l]) {
                l = mid + 1;  // min is in right half
            } else {
                h = mid - 1;  // min is in left half
            }
        }

        return res;
    }
};
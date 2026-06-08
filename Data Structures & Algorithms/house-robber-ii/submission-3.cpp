class Solution {
 private:
    int linearRob(vector<int>& nums, int start, int end) {
        int prev2 = 0, prev1 = 0;
        for (int i = start; i <= end; i++) {
            int curr = max(nums[i] + prev2, prev1);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        
        // Edge cases
        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0], nums[1]);

        // Case 1: exclude last house (0 to n-2)
        int ans1 = linearRob(nums, 0, n - 2);

        // Case 2: exclude first house (1 to n-1)
        int ans2 = linearRob(nums, 1, n - 1);

        return max(ans1, ans2);
    }
};

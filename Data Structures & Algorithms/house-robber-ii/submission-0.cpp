class Solution {
 private:
    int func(int ind, vector<int>&nums)
    {
       if(ind<0) return 0;
       if(ind==0) return nums[0];
     
      int take=nums[ind]+func(ind-2,nums);
      int nottake=0+func(ind-1,nums);

      return max(take,nottake);
 

    }
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> case1(nums.begin(), nums.end() - 1);
    int ans1 = func(n - 2, case1);

    // Case 2: exclude first house (index 1 to n-1)
    vector<int> case2(nums.begin() + 1, nums.end());
    int ans2 = func(n - 2, case2);

    return max(ans1, ans2);
    }
};

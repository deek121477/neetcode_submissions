class Solution {
 private:
    int func(int ind, vector<int>&nums,vector<int>&dp)
    {
       if(ind<0) return 0;
       if(ind==0) return nums[0];
       
       if(dp[ind]!=-1) return dp[ind];

      int take=nums[ind]+func(ind-2,nums,dp);
      int nottake=0+func(ind-1,nums,dp);

      return dp[ind]=max(take,nottake);
 

    }
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
 
        if(n==1)
        return nums[0];

        vector<int>dp1(n,-1);

        vector<int> case1(nums.begin(), nums.end() - 1);
        vector<int> dp2(n,-1);
    int ans1 = func(n - 2, case1,dp1);

    // Case 2: exclude first house (index 1 to n-1)
    vector<int> case2(nums.begin() + 1, nums.end());
    int ans2 = func(n - 2, case2,dp2);

    return max(ans1, ans2);
    }
};

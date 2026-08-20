class Solution {
public:
  
  void sub(vector<int>&nums, int ind,vector<int>& curr,vector<vector<int>>& ans){

    if(ind>=nums.size()) {
     ans.push_back(curr); // current subset store karo
    return;
    }

    sub(nums,ind+1,curr,ans);

    curr.push_back(nums[ind]);//current element
    sub(nums,ind+1,curr,ans);
    curr.pop_back();///backtracking important step
  }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        int n=nums.size();
        sub(nums,0,curr,ans);
        //ans.push_back(nums);
        return ans;
    }
};

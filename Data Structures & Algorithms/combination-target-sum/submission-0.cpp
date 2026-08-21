class Solution {
public:
void solve(vector<int>&nums,int ind,vector<int>&curr,int target,int sum, vector<vector<int>>&ans)
{
    if(ind==nums.size()||sum>target){return;}
    
    if(sum==target)
   {
  ans.push_back(curr);
  return;
   }
   //not take
   solve(nums,ind+1,curr,target,sum,ans);

   //take
    curr.push_back(nums[ind]);
   solve(nums,ind,curr,target,sum+nums[ind],ans);
   curr.pop_back();
    
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>curr;
        int index=0;
        solve(nums,0,curr,target,0,ans);
        return ans;

    }
};

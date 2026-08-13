class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      
        //sorted array, no duplicates---2 pointers
        /*vector<int> ans(n+1,0);
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
        if(nums[i]+nums[j]==target && i!=j)//1==1 wrong 1=2,2=3,
                {
                    ans.push_back({i,j});
                }
            }
        }
        return ans;*/
        int n=nums.size();
 int left=0,right=n-1;
 while(left<right)
 {
    if(nums[left]+nums[right]==target)
    {
        return {left,right};
    }
    else if(nums[left]+nums[right]>target)
    {
        right--;
    }
    else
    {
        left++;
    }
 }
 return {};
    }
};

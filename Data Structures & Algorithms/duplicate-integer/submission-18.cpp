class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
       /* for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]==nums[j])
                return true;
            }
        }
        return false;
        */
        /*sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1])
            {
                return true;
            }
        }
        return false;*/

   unordered_map<int,int>mp;
   for(int it:nums)
   {
         mp[it]++;
    if(mp[it]>1)
    return true;
}
return false;

    }
};
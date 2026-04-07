class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       /* int nsize=nums.size();
        for(int i=0;i<nsize;i++)
        {   for(int j=i+1;j<nsize;j++)
            {       if(nums[i]==nums[j])   {
                    return true;}}}
    return false;
    */

    int nsize=nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0;i<nsize;i++)
    {
        if(nums[i]==nums[i+1])
        {
            return true;
        }
    }
    return false;

    }
};
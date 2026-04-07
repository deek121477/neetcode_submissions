class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int nsize=nums.size();

        for(int i=0;i<nsize;i++)
        {
            for(int j=i+1;j<nsize;j++)
            {
                if(nums[i]==nums[j])
                {
                    return true;
                }
            }
        }
        return false;
    }
};
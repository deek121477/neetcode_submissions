class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        /*int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1])
            return true;
        }
        return false;*/
        unordered_map<int,int>mp;
        for(auto x:nums)
        {
            mp[x]++;
           
           if(mp[x]>1)//means duplicate present greater than one
           return true;
        
        }
return false;
    }
};
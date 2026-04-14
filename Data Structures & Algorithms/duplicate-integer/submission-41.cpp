class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        //sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;

        for(int i=0;i<n;i++)
        {

           if(mp.find(nums[i])!=mp.end())
           {
            return true;

           }
            mp[nums[i]]++;//num-->freq
            
        }
        return false;
    }
};
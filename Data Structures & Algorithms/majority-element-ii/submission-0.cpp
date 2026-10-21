class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result;
        int n=nums.size();
        map<int,int> mp;
        //int c=n/3;
     for(int num:nums)
     {
        mp[num]++;
     }

        for(auto& it:mp)
        {
            if(it.second > n/3)
            result.push_back(it.first);
        }
        return result;
    }
};
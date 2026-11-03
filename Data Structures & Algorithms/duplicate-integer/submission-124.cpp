class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        /*unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
               mp[nums[i]]++;//key,value//1-1,2-1,3-2
               if(mp[nums[i]]>1)
               return true;

                       }
        return false;*/
unordered_set<int> st;
for(int x:nums)
{
    if(st.count(x))
    return true;
    st.insert(x);
}
return false;

    }
};
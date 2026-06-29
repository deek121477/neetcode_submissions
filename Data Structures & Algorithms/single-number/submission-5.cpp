class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int n=nums.size();
        int i=0;
        sort(nums.begin(),nums.end());
        while(i<n-1)
        {
           
            if(nums[i]==nums[i+1])
            {
            i+=2;
            }
        else {
            return nums[i];
        }
        }
        return nums[i];
        
    }
};

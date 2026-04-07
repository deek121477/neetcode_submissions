class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
         int i=0, l=0,r=n-1;
        while(i<=r)
         {
            if(nums[i]==0)
            {
                swap(nums[l],nums[i]);
                l++;
            }
            else if(nums[i]==2)
            {
                swap(nums[i],nums[r]);
                r--;
                i--;
            }
             i++;
         }
        
         
        
    }
};
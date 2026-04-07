class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int l=0,r=0,n=nums.size(),sum=0,minisum=INT_MAX;
     

     while(r<n)
     {
       sum+=nums[r];  
        r++;
     
    while(sum>=target)
    {
        minisum=min(minisum,r-l);
        sum-=nums[l];
        l++;
    }
     }
if(minisum!=INT_MAX)
return minisum;
else
return 0;  
    }
};
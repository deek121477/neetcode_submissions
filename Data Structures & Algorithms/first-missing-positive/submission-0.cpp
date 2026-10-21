class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        //1,2,4--will work
        //not for-(-2,-1,0)
        //n*(n+1)/2=3*4/2=12/2=6
        //6-3=3
        sort(nums.begin(),nums.end());
        int miss=1;
        for(int num:nums)
        {
            if(num>0 && miss==num)
            miss++;
        }
        return miss;
    
     


    }
};
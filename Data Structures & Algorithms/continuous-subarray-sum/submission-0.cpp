class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        //no 2 pointers coz not sorted
        for(int i=0;i<n;i++)
    {
      int sum=nums[i];
      for(int j=i+1;j<n;j++)
      {
        sum+=nums[j];
        if(sum%k==0)
        return true;
      }
    }
    return false;
    }
};



// sum=23,2,4,6,7=42,  sum%k=0, length>2
// sum=contagiuos(2,4) 2+4=6, 6/k=6/6=1
// 
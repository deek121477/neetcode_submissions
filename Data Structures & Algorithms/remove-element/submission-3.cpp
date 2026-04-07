class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
/*
       vector<int>temp;
 
         //are they already sorted
         for(int num:nums)
         {
            if(num!=val)
            {
         temp.push_back(num);
            }
         }
         int m=temp.size();
         for(int i=0;i<m;i++)
          {
            nums[i]=temp[i];
          }
         return temp.size();
   */
  /* int k=0;
   for(int i=0;i<n;i++)
   {
    if(nums[i]!=val)
    {
        nums[k++]=nums[i];
    }
   }
   return k;*/
   int i=0;//n=nums.size();
   while(i<n)
   {
    if(nums[i]==val)
    {
        nums[i]=nums[--n];
    }
    else
    {
        i++;
    }
   }
return n;

    }
};
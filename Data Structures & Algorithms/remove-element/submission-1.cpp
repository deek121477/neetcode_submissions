class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();

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
    


    }
};
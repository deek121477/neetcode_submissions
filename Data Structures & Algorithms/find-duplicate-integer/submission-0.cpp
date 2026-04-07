class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
     
     int slow=nums[0],fast=nums[0];
//check whether u got duplicate element 
//using 2 pointers
   do{
    slow=nums[slow];
    fast=nums[nums[fast]];
   }
     while(slow!=fast);

     slow=nums[0];
     while(slow!=fast)
     {
      slow=nums[slow];
      fast=nums[fast];
     }

 return slow;


    }
};

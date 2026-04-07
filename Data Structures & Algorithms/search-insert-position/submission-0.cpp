class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,right=n-1;

        while(low<=right)
        {
          int mid=low+(right-low)/2;
          if(nums[mid]<target)
          {
           low=mid+1;
          }
          else if(nums[mid]>target)
          {
          right=mid-1;
          }
          else {
              return mid;
          }
        }
           return low;

    }
};
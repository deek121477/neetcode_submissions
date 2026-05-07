class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0,end=n-1;
        bool first=nums[start]<nums[end];
        //Order Agnoistic Binary Search
        while(start<=end)
        {
            int mid=(start+(end-start)/2);
            if(nums[mid]==target)
            return mid;

            if(first)//ascending
            {
                if(nums[mid]>target)//9>8
                {
                   end=mid-1;
                }
                else
                {
                  start=mid+1;
                } 
            }
            else//descending
            {
                if(nums[mid]>target)
                {
                start=mid+1;
                }
                else
                {
                  end=mid-1;
                }
            }
        }
        return -1;
    }
};

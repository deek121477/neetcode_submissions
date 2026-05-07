class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0,right=n-1;
        
        while(left<=right)
        {
            int mid=(left+(right-left)/2);

if(nums[mid]==target)
  {
      return mid;
}

//check left half sorted 
//left, mid
//under this check if target lies between them
else if(nums[left]<=nums[mid])
{
    if(nums[left]<=target && target<nums[mid])
    {
        right=mid-1;
    }
    else
    {
        left=mid+1;
    }
}
//check right half sorted
//mid, end
// under this condition check if target lies between them
else 
{
    if(nums[mid]<target && target<=nums[right])
    {
        left=mid+1;
    }
    else
    {
        right=mid-1;
    }
}

        }
return -1;
    }
};

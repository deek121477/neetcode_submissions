class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
       
       //Because this is more optimzied 
        int mid=(high-(low+high))/2;
        

        while(low<=high)
        {
            if(mid>target)
            {
                high--;
            }
            else 
            {
                low++;
            }
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
            {
                return i;
            }
        }
        }
    return -1;




    }
};

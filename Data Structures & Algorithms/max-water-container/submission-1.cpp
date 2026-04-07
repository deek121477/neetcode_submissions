class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int left=0,right=n-1;

     int maxi=INT_MIN;
        while(left<right)
        {
          int width= (right-left);
          int m=min(heights[left],heights[right]);
          maxi=max(maxi,width*m);
          
          if(heights[left]<heights[right])
          {
            left++;
          }
          else
          {
            right--;
          }
        }
        return maxi;
    }
};

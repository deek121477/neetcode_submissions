class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int left=0,right=n-1;

     int maxi=0;
      /*  while(left<right)
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
        */
        for(int i=0;i<n;i++)
        {
            
            for(int j=i+1;j<n;j++)
            {
               
                
                     int width=(j-i);
                    int minimum=min(heights[i],heights[j]);
                    maxi=max(maxi,min(heights[i],heights[j])*(j-i));
                }
            
        }
        return maxi;
    }
};

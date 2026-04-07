class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
       int i=0,j=n-1;
       int maxi=0;
       while(i<j)
       {
        int width=j-i;
        int mini=min(heights[i],heights[j]);
        maxi=max(maxi,width*mini);

        if(heights[i]<=heights[j])
        {
            i++;
        }
        else
        {
            j--;
        }
       }
       return maxi;

    }
};

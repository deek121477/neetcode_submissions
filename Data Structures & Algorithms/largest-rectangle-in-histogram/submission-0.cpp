class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxarea=0;
        int n=heights.size();

         for(int i=0;i<n;i++)
         {
            int height=heights[i];
            int rightmost=i+1;
   
    while(rightmost<n && heights[rightmost]>=height)
   {
    rightmost++;
   }
   int leftmost=i;
   while(leftmost>=0 && heights[leftmost]>=height)
  {
    leftmost--;
  }
  rightmost--;
  leftmost++;
  maxarea=max(maxarea,height*(rightmost-leftmost+1));
         }
         return maxarea;
    }
};

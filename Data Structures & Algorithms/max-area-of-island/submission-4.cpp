class Solution {
public:
int dfs(int i,int j,int n,int m, vector<vector<int>>& grid)
{
    if(i<0||j<0||i>=n||j>=m||grid[i][j]!=1)
    {
        return 0;
    }
    grid[i][j]=0;
    
    return 1+ dfs(i-1,j,n,m,grid) + dfs(i+1,j,n,m,grid) + dfs(i,j-1,n,m,grid) + dfs(i,j+1,n,m,grid);


}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxi=0;
       // int count=0;
        if(grid.empty()) return 0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
             
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    
   int count=dfs(i,j,n,m,grid);
     maxi=max(maxi,count);                                       
                }
            }
          
        }
        return maxi;
    }
};

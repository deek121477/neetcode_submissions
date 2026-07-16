class Solution {
public:
void dfs(int i,int j,int n,int m, vector<vector<char>>& grid)
{
   if(i<0 || j<0 || i>=n || j>=m || grid[i][j]!='1')
   return;
  grid[i][j]='0';
    // if(i>=0 || j>=0 || i<=n-1 || j<=m-1 || grid[i][j]=='1')
    //dont write grid[i][j]
     dfs(i-1,j,n,m,grid);//left
    dfs(i+1,j,n,m,grid);//right
     dfs(i,j-1,n,m,grid);//up
     dfs(i,j+1,n,m,grid);//down


}
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               //dfs(0,0,n,m,grid[i][j]);
               if(grid[i][j]=='1')
                count++;
                dfs(i,j,n,m,grid);
            }
        }
        return count;
    }
};

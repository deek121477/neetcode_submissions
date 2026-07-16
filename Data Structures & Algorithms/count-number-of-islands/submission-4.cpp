class Solution {
public:
void dfs(int i,int j,int n,int m, vector<vector<char>>& grid)
{
   if(i<0 || j<0 || i>n-1 || j>m-1 || grid[i][j]!='1')
     grid[i][j]=0;
     if(i>=0 || j>=0 || i<=n-1 || j<=m-1 || grid[i][j]=='1')
     dfs(i-1,j,n,m,grid[i][j]);
          dfs(i-1,j,n,m,grid[i][j]);

     dfs(i-1,j,n,m,grid[i][j]);

}
    int numIslands(vector<vector<char>>& grid) {
        
    }
};

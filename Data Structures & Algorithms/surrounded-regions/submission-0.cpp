class Solution {
public:
void dfs(int i,int j,int m,int n,vector<vector<char>>& board)
{
    if(i<0||j<0||i>=m||j>=n||board[i][j]!='O')
    {
        return;
    }
    if(i==m-1||j==n-1)
    {
        return;
    }
    board[i][j]='X';
    dfs(i-1,j,m,n,board);
    dfs(i+1,j,m,n,board);
    dfs(i,j-1,m,n,board);
    dfs(i,j+1,m,n,board);



}
    void solve(vector<vector<char>>& board) {
        if(board.empty()) return;

        int m=board.size();
        int n=board[0].size();

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]=='O')
                {
                    dfs(i,j,m,n,board);
                }
            }
        }
    }
};

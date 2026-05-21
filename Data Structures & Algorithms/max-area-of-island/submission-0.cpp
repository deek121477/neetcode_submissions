class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
     
     int maxi=INT_MIN;
 
    vector<vector<int>>visi(n,vector<int>(m,0));
   queue<pair<int,int>>q;

    for(int r=0;r<n;r++)
    {
        for(int c=0;c<m;c++)
        {
  
  if(grid[r][c]==1 && !visi[r][c])
  {
    q.push({r,c});

  }
    visi[r][c]=1;
    int area=1;
   int dr[]={-1,0,+1,0};
   int dc[]={0,-1,0,+1};
  
   while(!q.empty())
   {
    auto [x,y]=q.front();
    q.pop();
  
  for(int i=0;i<4;i++)
  {
     
     int one=x+dr[i];
     int two=y+dc[i];
     if(one>=0 && one<n && two>=0 && two<m && !visi[one][two] && grid[one][two]==1)
     {
        visi[one][two]=1;
        q.push({one,two});
        area++;
     }
    }
    maxi=max(maxi,area);
        }
    }

   }
return maxi;        
    }
};

class Solution {
public:
/*
int func(int ind1,int ind2,string text1, string text2,vector<vector<int>>&dp)
{
    if(ind1<0 || ind2<0)
    return 0;
  
   if(dp[ind1][ind2]!=-1)
   return dp[ind1][ind2];

    if(text1[ind1]==text2[ind2])
    return 1+func(ind1-1,ind2-1,text1,text2,dp);

    return dp[ind1][ind2]=max(func(ind1-1,ind2,text1,text2,dp),func(ind1,ind2-1,text1,text2,dp));
}*/
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1));
        
        //base case
        if(n<0||m<0)
        return 0;

        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                //all possible ways
                if(text1[i]==text2[j])
             {
                dp[i][j]=1+dp[i+1][j+1];
            }
            else
            dp[i][j]=max(dp[i][j+1],dp[i+1][j]);
            }
        }
        
        return dp[0][0];
        
        
        //return func(n-1,m-1,text1,text2,dp);
    }
};

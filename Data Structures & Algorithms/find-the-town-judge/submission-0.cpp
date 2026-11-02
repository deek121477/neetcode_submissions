class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
      int nm=trust.size();
      //vector<int> ans;
      //int m=ans.size();
      unordered_map<int,int> mp;
      vector<int>income(n+1,0);
      vector<int>outcome(n+1,0);
      for(auto & it:trust)
      {
        int a=it[0];//store number with its value
        int b=it[1];
        outcome[a]++;
        income[b]++;
      }
    for(int i=1;i<=n;i++)
    {
      if(outcome[i]==0 && income[i]==n-1)
      return i;
    }
      return -1;

    }
};
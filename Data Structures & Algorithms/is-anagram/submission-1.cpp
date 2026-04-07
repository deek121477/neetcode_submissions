class Solution {
public:
    bool isAnagram(string s, string t) {
        //comparison will go according to the size 
        // letter is same or not we have to check that
        //Time Complexity:O(nlogn+mlogm)
        //Space Complexity:O(1) or O(n+m)
        /*sort(s.begin(),s.end());
        sort(t.begin(),t.end());
           int n=s.size();
           int m=t.size();
        if(n!=m){return false;}
        return s==t;*/
int n=s.size(),m=t.size();
  if(n!=m) return false;
  unordered_map<char, int> countS,countT;
  for(int i=0;i<n;i++)
  {
    countS[s[i]]++;countT[t[i]]++;
  }
  return countS == countT;
    }
};

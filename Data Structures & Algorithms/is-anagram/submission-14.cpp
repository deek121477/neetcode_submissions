class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        int m=t.length();
      /*  if(n!=m)
        return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
      if(s==t)
      return true;
      else
      return false;*/
      if(n!=m)
      return false;
unordered_map<char, int> s1;
unordered_map<char, int> s2;
for(int i=0;i<n;i++)
{
   s1[s[i]]++;
   s2[t[i]]++;
}

return s1==s2;
   

    }
};

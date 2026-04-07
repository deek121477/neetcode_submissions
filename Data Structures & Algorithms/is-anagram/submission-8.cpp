class Solution {
public:
    bool isAnagram(string s, string t) {
       /* int n=s.size();
        int m=t.size();
        if(n!=m)//length not same
        return false;
        
        sort(s.begin(),s.end());
                sort(t.begin(),t.end());

        for(int i=0;i<n;i++)
        {
            if(s[i]!=t[i])
            return false;
        }
        return true;
        */
        int n=s.size();
        int m=t.size();
       if(n!=m)
       return false;//length is not same
     unordered_map<char,int>mp1;
     unordered_map<char,int>mp2;
     for(int i=0;i<n;i++)
     {
        mp1[s[i]]++;
        mp2[t[i]]++;
       }
     return mp1==mp2;
      
    }
};

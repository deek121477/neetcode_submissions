class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m)
        return false;

     /*for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(s[i]==t[j])
                return true;
            }
        }
        return false;
        */

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        return s==t;

    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_map<char,int> mp;
        int l=0,res=0;

        for(int r=0;r<n;r++)//iterate through while(r<n)
        {
            if(mp.find(s[r])!=mp.end())//if s[r]!=s[r+1]
                                      //new element
            {
                l=max(mp[s[r]]+1,l);// left will give max
                                   // where string s[r]+1, l
            }
            mp[s[r]]=r;// mp of string of right=right coz repeated char
            res=max(res,r-l+1);//result max would be updated
        }
           
           return res;


    }
};

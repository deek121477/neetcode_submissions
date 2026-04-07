class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //Sorted or Not Sorted-Not
        //O(N) --10^4

        int n=s.size();
        unordered_map<char,int> mp;//to count char from string
        int start=0,end=0;
        int mx=0;//longest
        while(end<n)
        {
          //to add the charcters present--count too for each
        if(mp.find(s[end])!=mp.end())
         {
            start=max(start,mp[s[end]]+1);
          }
          mx=max(mx,end-start+1);
          mp[s[end]]=end;
          end++;
             }
        return mx;
    }
};
class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        //declare map
        unordered_map<char,int>mp;
        int left=0,right=0,maxfreq=0,maxlength=0;
        
        while(right<n)
        {
            mp[s[right]]++;//increment right exapnd
            maxfreq=max(maxfreq,mp[s[right]]);
            
           while((right-left+1)-maxfreq>k)//out of bound 3>2
        {
               mp[s[left]]--;//increment left shrink
               left++;
        }
            maxlength=max(maxlength,(right-left+1));
            right++;

        }



return maxlength;

    }
};

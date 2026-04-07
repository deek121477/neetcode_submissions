class Solution {
public:
    bool isAnagram(string s, string t) {
        //comparison will go according to the size 
        // letter is same or not we have to check that
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
           int n=s.size();
           int m=t.size();
        
        if(n!=m)
        {
            return false;
        }
        return s==t;
    }
};

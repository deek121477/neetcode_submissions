class Solution {
public:
    void reverseString(vector<char>& s) {
       int n=s.size();
        int i=0,j=n-1;
        while(i<=j)
        {
            if(s[i]==s[j])
            
            {i++;j--;}
            else
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }

    }
};
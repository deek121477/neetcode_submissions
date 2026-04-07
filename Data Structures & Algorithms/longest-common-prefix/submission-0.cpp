class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       //Question says about longest than for sure use ordered_map
       // As order matters in this
        int n=strs.size();
        string prefix=strs[0];
        if(n==0)
        return "";
        vector<string> s1;

        for(int i=0;i<n;i++)
        {
            int j=0;
            while(j<min(prefix.length(),strs[i].length()))
            {
                if(prefix[j]!=strs[i][j])
                {
                    break;
                }
                j++;
            }
           prefix=prefix.substr(0,j);
        }
    
    
    return prefix;
    
      }
};
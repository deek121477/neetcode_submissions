class Solution {
public:
vector<string> ans;
void func(string &s, int open, int close)
{
    if(open==0 && close==0)
    {
       ans.push_back(s);
       return;
    }
    if(open>0)
    {
     s.push_back('(');
     func(s,open-1,close);
     s.pop_back();
    }
    if(close>open)
    {
     s.push_back(')');
     func(s,open,close-1);
     s.pop_back();
    }
}
    vector<string> generateParenthesis(int n) {
        string s="";
        func(s,n,n);
        return ans;
    }
};

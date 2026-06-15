class Solution {
public:
int func(int ind1,int ind2,string text1, string text2)
{
    if(ind1<0 || ind2<0)
    return 0;

    if(text1[ind1]==text2[ind2])
    return 1+func(ind1-1,ind2-1,text1,text2);

    return max(func(ind1-1,ind2,text1,text2),func(ind1,ind2-1,text1,text2));

}
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        return func(n-1,m-1,text1,text2);
    }
};

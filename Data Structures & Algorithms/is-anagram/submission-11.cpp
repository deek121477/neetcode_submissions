class Solution {
public:
    bool isAnagram(string s, string t) {
     int n=s.length();
     int m=t.length();

    if(n!=m)//length not equal
    return false;

    unordered_map<char,int> scount;
    unordered_map<char,int> tcount;
    for(int i=0;i<n;i++)
    {
        scount[s[i]]++;
        tcount[t[i]]++;
    }
    return scount==tcount;



    }
};

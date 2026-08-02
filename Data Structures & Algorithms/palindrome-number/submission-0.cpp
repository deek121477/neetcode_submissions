class Solution {
public:
    bool isPalindrome(int x) {
       if (x < 0) return false;
       int y=x;
       long long ld=0,rev=0;
      while(y!=0)
      {
       ld=y%10; //121--1,12-2,1
       rev=(rev*10)+ld;//0+1=1, 10*1+2=12,12*10+1=121
       y=y/10;//12//1//0
      }
       if(x==rev)
       return true;
       else
       return false;
    }
};
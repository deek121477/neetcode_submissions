class Solution {
public:
    int climbStairs(int n) {
        //Base condition
        if(n<=2)
        return n;
          //To take or not take

        int step1=climbStairs(n-1);//1 way
        int step2=climbStairs(n-2);//2 way

        //either 1 or 2 steps
        int tot=step1+step2;

        return tot;
    }
};

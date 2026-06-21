class Solution {
public:
int func(int ind,int buy, vector<int>& prices,int n)
{
    if(ind>=n) return 0;

    if(buy)
    {
    return max(-prices[ind]+func(ind+1,0, prices,n),0+func(ind+1,1,prices,n));  
    }
    else
    {
    return max(prices[ind]+func(ind+2,1,prices,n),0+func(ind+1,0,prices,n));
    }
}
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        return func(0,1,prices,n);
    }
};

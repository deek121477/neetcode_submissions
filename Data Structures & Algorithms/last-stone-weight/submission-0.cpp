class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        priority_queue<int> maxh(stones.begin(),stones.end());
//last==max heap

   while(maxh.size()>1)
   {
    //1st stone
    int y=maxh.top();
    maxh.pop();
    //2nd stone
    int x=maxh.top();
    maxh.pop();
    
    if(y>x)
    maxh.push(y-x);
    else if(x==y)
    maxh.push(0);
   }
if(maxh.empty())
return 0;
else
return maxh.top();

    }
};

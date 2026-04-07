class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

     //n<=20
     //last--> maxheap-sort
        int n=stones.size();
        priority_queue<int> maxh(stones.begin(),stones.end());
       

        while(maxh.size()>1){
            int top2=maxh.top();//4
            maxh.pop();
            int top1=maxh.top();//2
            maxh.pop();
            
            if(top2>top1)
            maxh.push(top2-top1);//if top2>top1
            else if(top1==top2)
            maxh.push(0);//if both equal destroy

        }
        return maxh.top();




    }
};

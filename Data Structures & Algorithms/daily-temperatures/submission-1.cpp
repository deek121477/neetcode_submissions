class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
     int n=temperatures.size();
     vector<int> result(n,0);   

    stack<int> st;
   for(int i=n-1;i>=0;i--)//reverse
   {
    int count=0;//distance 
    while(!st.empty() && temperatures[i]>=temperatures[st.top()]) // stack not empty and has element and also 
    {st.pop(); }
    //nums[i] < st.top()
     //count=0;
     //result_push_back(count);
   if(!st.empty())
   {
    result[i]=st.top()-i;
   }
   
   st.push(i);
   }

return result;

    }
};

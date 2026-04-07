class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
  //since words such as longest,smallest,largest,sorted not used 
  //dont use ordered
  unordered_map<int,int> answer;
  answer.reserve(n);
  for(int i=0;i<n;i++)
{
    answer[nums[i]]=i;//basically store all nums values in answer vector
}
for(int i=0;i<n;i++)
{
int key=target-nums[i];//key=7-4=3
if(answer.count(key) && answer[key]!=i){
return {i,answer[key]};
}
}
return {};
 }
};

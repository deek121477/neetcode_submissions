class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<long long,int> mp;
         mp[0]=1;
        long long sum=0;
        int res=0;
        for(int num:nums){
           
           sum+=num;
           int diff=sum-k;
           res+=mp[diff];
           
           mp[sum]++;
            
        
        }
        return res;
    }
};
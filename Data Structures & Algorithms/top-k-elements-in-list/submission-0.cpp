class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        int n=nums.size();
       
       priority_queue<pair<int,int>> maxh;
        unordered_map<int,int> mp;

        for(auto it:nums)
        {
            mp[it]++;
        }
        for(auto i:mp)
        {
             maxh.push({i.second,i.first});
        }
        
        while(k--)
        {
          result.push_back(maxh.top().second); 
          maxh.pop(); 
        }

        return result;


    }
};

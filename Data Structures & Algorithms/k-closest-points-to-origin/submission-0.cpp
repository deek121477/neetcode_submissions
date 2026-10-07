class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> results;
        priority_queue<pair<int, pair<int, int>>> maxh;

     for(auto & dist: points)
     {
          int d=dist[0]*dist[0]+dist[1]*dist[1];
          maxh.push({d,{dist[0],dist[1]}});
          if(maxh.size()>k)
          {
            maxh.pop();
          }
     }

        while(!maxh.empty())
        {
        results.push_back({maxh.top().second.first,maxh.top().second.second});
        maxh.pop();

        }
        return results;
    }
};

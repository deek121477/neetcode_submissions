/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        int n=intervals.size();
        int mini=INT_MAX;
        sort(intervals.begin(),intervals.end(),[](auto&a, auto&b){
            return a.start<b.start;
        });

        priority_queue<int,vector<int>,greater<int>>minh;
        for(const auto& interval:intervals){
            if(!minh.empty() && minh.top()<=interval.start)
{
    minh.pop();
}      
minh.push(interval.end);
  }
return minh.size();
    }
};

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
    bool canAttendMeetings(vector<Interval>& intervals) {
        //0-30,5-10,15-20 ---->
        //here 
        //0 5 10 15 20 30
        //
        //5-8,9-15

        //i=0 to n
        //j=i+1 to n
        //intervals-start
        sort(intervals.begin(), intervals.end(),
     [](const Interval& a, const Interval& b){
         return a.start < b.start;
     });
        int n=intervals.size();
      //  sort(intervals.begin(),intervals.end());
        for(int i=0;i<n-1;i++)
          {
        
          if(intervals[i].end>intervals[i+1].start)
          {
            return false;
          }
          
          }
          return true;
    }
};

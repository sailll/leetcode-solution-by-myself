/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    static bool compare(Interval i, Interval j){
        return i.start < j.start;
    }
    vector<Interval> merge(vector<Interval>& intervals) {
        sort(intervals.begin(), intervals.end(), compare);
        vector<Interval> ans;
        if(intervals.size() == 0){
            return ans;
        }
        ans.push_back(intervals[0]);
        for(int i=1;i<intervals.size();++i){
            int n = ans.size()-1;
            Interval cur = ans[n];
            if(cur.end < intervals[i].start){
                ans.push_back(intervals[i]);
                continue;
            }
            if(cur.end >= intervals[i].start &&  cur.end < intervals[i].end){
                ans[n].end = intervals[i].end;
                continue;
            }
        }
        return ans;
    }
};
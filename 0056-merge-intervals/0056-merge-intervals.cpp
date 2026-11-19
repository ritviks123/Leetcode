class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> out;
        
        for (auto curr : intervals){
            if (out.empty() || out.back()[1] < curr[0]){
                out.push_back(curr);
            } else {
                out.back()[1] = max(out.back()[1], curr[1]);
            }
        }
        return out;
    }
};

/* 
    sort intervals [smallest, largest]
    if 1[largest] >= 2[smallest] 
    then 1[ 1smallest, 2largest ]
*/
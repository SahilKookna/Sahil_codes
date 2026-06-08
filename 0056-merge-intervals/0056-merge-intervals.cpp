class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        for(int i=0;i<intervals.size();i++){
            if(!ans.empty()&& ans.back()[1]>=intervals[i][0]){
                int maxelement=max(intervals[i][1],ans.back()[1]);
                ans.back()[1]=maxelement;

            }
            else{
                
                ans.push_back(intervals[i]);
               
            }
        }
        
        return ans;
    }
};
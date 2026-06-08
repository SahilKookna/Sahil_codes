class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n=intervals.size();
        vector<vector<int>>ans;
        bool isEmpty=true;
        if(intervals.empty()){
                ans.push_back(newInterval);
                return ans;
        }
         
        for(int i=0;i<n;i++){
            if(isEmpty){
                if(intervals[i][0]>newInterval[1]){
                     ans.push_back(newInterval);
                     isEmpty=false;
                     ans.push_back(intervals[i]);

                }
                else if(intervals[i][1]>=newInterval[0]){
                    int maxelement1=max(intervals[i][1],newInterval[1]);
                    int minelement=min(intervals[i][0],newInterval[0]);
                    ans.push_back({minelement,maxelement1});
                    isEmpty=false;
                }
                else{
                    ans.push_back(intervals[i]);
                    if(i==n-1){
                        ans.push_back(newInterval);
                    }
                }
            }
            else{
                if(ans.back()[1]>=intervals[i][0]){
                    int maxelement=max(ans.back()[1],intervals[i][1]);
                    ans.back()[1]=maxelement;
                }
                else{
                     ans.push_back(intervals[i]);
                }
            }
            
        }
        return ans;
    }
};
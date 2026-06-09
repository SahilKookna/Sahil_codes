class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>ans;
        vector<int>v1;
        vector<int>v2;
        int a=0;
        for(int i=0;i<nums.size();i++){
            v1.push_back(a);
            a=a+nums[i];
        }
        a=0;
        for(int i=nums.size()-1;i>=0;i--){
            v2.push_back(a);
            a=a+nums[i];
        }
        reverse(v2.begin(),v2.end());
        for(int i=0;i<nums.size();i++){
            ans.push_back(abs(v1[i]-v2[i]));
        }
        return ans;
    }
};
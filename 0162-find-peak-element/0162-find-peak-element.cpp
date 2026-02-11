class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int ans=INT_MIN;
        int idx=0;;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>ans){
                ans=nums[i];
                idx=i;
            } 
        }
        return idx;
    }
};
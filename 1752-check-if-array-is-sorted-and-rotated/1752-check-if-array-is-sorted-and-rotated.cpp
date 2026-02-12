class Solution {
public:
    bool check(vector<int>& nums) {
        int ans=0;
        int idx=0;
        int a=0;
        vector<int> nums2(nums.size());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                ans++;
                idx=i+1;
            }
        }
        if(ans==0) return true;
         else if (ans>=1){
            for(int j=0+idx;j<nums.size();j++){
                nums2[a]=nums[j];
                a++;
            }
            for(int k=0;k<idx;k++){
                nums2[a]=nums[k];
                a++;
            }

        }
        int ans2=0;
        for(int i=0;i<nums2.size()-1;i++){
            if(nums2[i]>nums2[i+1]){
                ans2++;
                
            }
        }
        if(ans2==0) return true;

        return false;
    }
};
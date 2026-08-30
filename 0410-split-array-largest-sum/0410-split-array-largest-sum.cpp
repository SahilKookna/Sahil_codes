class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int ans=0;
        int l=*max_element(nums.begin(),nums.end());
        int r=accumulate(nums.begin(),nums.end(),0);
        while(l<=r){
            int mid=(l+r)/2;
            int count=1;
            int a=0;
            for(int i=0;i<nums.size();i++){
                if(a+nums[i]<=mid){
                    a=a+nums[i];
                }
                else{
                    count++;
                    a=nums[i];
                }
            }
            if(count>k){
                l=mid+1;
            }
            else{
                r=mid-1;
                ans=mid;
            }

        }
        return ans;
    }
};
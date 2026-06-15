class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int n=nums.size();
       int low=0;
       int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target) return mid;
            else if(target>nums[mid]) low=mid+1;
            else high=mid-1;
        }
        nums.push_back(target);
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target) return i;
        }
        return -1;
    }
};
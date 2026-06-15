class Solution {
public:
    int insert(vector<int>& nums,int low,int high, int target){
        if(low>high) return low;
        int mid=(low+high)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]<target){
            low=mid+1;
         return insert(nums,low,high,target);
        }
        else{
            high=mid-1;
            return insert(nums,low,high,target);
        }
    }
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        return insert(nums,low,high,target);
    }
};
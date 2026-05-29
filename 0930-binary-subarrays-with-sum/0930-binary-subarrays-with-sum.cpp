class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum=0;
        int count=0;
        int count1=0;
        int l=0;
        int r=0;
        if(goal < 0)
        {
            return 0;
        }
        while(r<=nums.size()-1){
            sum=sum+nums[r];
            while(sum>goal){
                sum=sum-nums[l];
                l++;
            }
            count=count+(r-l+1);
            r=r+1;

        }
        sum = 0;
        l = 0;
        r = 0;
             if(goal-1 < 0)
            {
                return count;
            }
        while(r<=nums.size()-1){
            sum=sum+nums[r];
            while(sum>goal-1){
           
                sum=sum-nums[l];
                l++;
            }
            count1=count1+(r-l+1);
            r=r+1;

        }
        return count-count1;

    }
};
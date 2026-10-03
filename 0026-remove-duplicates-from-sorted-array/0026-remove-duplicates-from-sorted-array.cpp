class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int sum=1;
        int j=0;
        int a=nums[j];
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=a){
                j++;
                nums[j]=nums[i];
                a=nums[i];
                sum++;
            }
        }
        return sum;
    }
};
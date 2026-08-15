class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int x=0;
        int z=0;
        for(int i=0;i<nums.size();i++){
            x=x^nums[i];
            if(nums[i]==0){
                z++;
            }
        }
        if(x!=0) return nums.size();
        else if(z==nums.size())return 0;
        else return nums.size()-1;
        
    }
};
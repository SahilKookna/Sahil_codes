class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long moves=0;
        int median=nums[nums.size()-1];
        for(int i=0;i<nums.size();i++){
            moves+=abs(median-nums[i]);
        }
        return moves;
    }
};
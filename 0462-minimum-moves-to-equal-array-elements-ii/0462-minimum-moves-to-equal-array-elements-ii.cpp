class Solution {
public:
    int minMoves2(vector<int>& nums) {
        long long moves=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            long long x=0;
            for(int j=0;j<nums.size();j++){
                x=x+abs(nums[i]-nums[j]);
            }
            moves=min(x,moves);
        }
        return moves;
    }
};
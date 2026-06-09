class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int maxnums=INT_MIN;
        int minnums=INT_MAX;
       
            for(int j=0;j<nums.size();j++){
                maxnums=max(maxnums,nums[j]);
                minnums=min(minnums,nums[j]);
            }
            long long sum=1LL *k*(maxnums-minnums);
            return sum;
        
    }
};
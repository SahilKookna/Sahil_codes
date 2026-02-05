class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        if(n==0) return 0;
        vector<int> hash(n,0);
        int idx=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]==nums[i]) continue;
            else if(nums[i-1]+1==nums[i]){
                hash[idx]++;
            }
            else idx++;
        }

        
        int maxi=*max_element(hash.begin(),hash.end());
        return maxi+1;
    }
};
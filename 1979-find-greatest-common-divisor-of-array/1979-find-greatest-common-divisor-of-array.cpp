class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi=*max_element(begin(nums),end(nums));
        int mini=*min_element(begin(nums),end(nums));
        while(mini!=0){
            int rem=maxi%mini;
            maxi=mini;
            mini=rem;
        }
        return maxi;
    }
};
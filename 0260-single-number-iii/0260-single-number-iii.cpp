class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>ans;
        int a=nums[0];
        for(int i=1;i<nums.size();i++){
            a=a^nums[i];

        }
        // find the rightmost set bit in a;
        int x=0;
        int y=0;
      unsigned int mask = (unsigned int)a & (-(unsigned int)a);
        for(int i=0;i<nums.size();i++){
            if(nums[i]&mask){
                x=x^nums[i];
            }
            else{
                y=y^nums[i];
            }
        }

        ans.push_back(x);
        ans.push_back(y);
        return ans;
    }
};
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>ans;
        int a=nums[0];
        for(int i=1;i<nums.size();i++){
            a=a^nums[i];

        }
        // find the rightmost set bit in a;
        long long b=0;
        int c=a;
        while(c!=0){
            if((c&1)==1){
                break;
            }
            b++;
            c=c>>1;
        }
        vector<int>n;
        vector<int>m;
        for(int i=0;i<nums.size();i++){
            if((nums[i]&(1<<b))!=0){
                n.push_back(nums[i]);
            }
            else{
                m.push_back(nums[i]);
            }
        }
        int x=0;
        int y=0;
        for(int i=0;i<n.size();i++){
            x=x^n[i];
        }
        for(int i=0;i<m.size();i++){
            y=y^m[i];
        }

        ans.push_back(x);
        ans.push_back(y);
        return ans;
    }
};
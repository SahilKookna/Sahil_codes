class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            int a=0;
            for(int j=0;j<n;j++){
                if(i!=j&&nums[i]==nums[j]){
                    a++;
                    break;
                };
            }
            if(a==0){
                return nums[i];
            }
            

           
        }
        return 0;
    }
};
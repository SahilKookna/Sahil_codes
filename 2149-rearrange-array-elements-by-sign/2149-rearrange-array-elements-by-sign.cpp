class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>v(n,0);
        int p=0; 
        int ng=1;
        for(int i=0;i<nums.size();i++){
           if(nums[i]>=0){
            v[p]=nums[i];
            p=p+2;
           } 
           else{
            v[ng]=nums[i];
            ng=ng+2;
           }
        }
       
        return v;

    }
};
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int> array;
         
        
        for(int i=0;i<n;i++){
            int a=0;
            for(int j=0;j<n;j++){
                if(i!=j&&nums[i]==nums[j]){
                    a++;
                    break;
                };
            }
            if(a==0){
                int b=nums[i];
                array.push_back(b);
            }
            

           
        }
        return array;
    }
    
};
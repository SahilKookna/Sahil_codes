class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //  BRUTE FORCE
        // vector<int> v;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(target-nums[i]==nums[j]){
        //             v.push_back(i);
        //             v.push_back(j);
        //         }
        //     }
        // }
        // return v;


        //OPTIMISED SOLUTION
        map<int,int>mpp;
        vector<int>v;
        int n=nums.size();
         mpp[nums[0]]=0;
        for (int i=1;i<n;i++){
           
            if(mpp.find(target-nums[i])!=mpp.end()){
                auto it = mpp.find(target-nums[i]);
                v.push_back(it->second);
                v.push_back(i);
                
            }
            else{
                mpp[nums[i]]=i;
            }


        }
        return v;

    }
};
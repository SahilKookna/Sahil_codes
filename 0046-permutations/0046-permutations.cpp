class Solution {
public:
    void permutation(vector<int>& nums,vector<int> ans, int idx,  vector<vector<int>>&  allpermutation){
    if(idx==nums.size()){
        allpermutation.push_back(nums);
        return;
    }
    for(int i=idx;i<nums.size();i++){
        swap(nums[idx],nums[i]);
         permutation(nums,ans,idx+1,allpermutation);
         swap(nums[idx],nums[i]);
    }
    };
    vector<vector<int>> permute(vector<int>& nums) {
      vector<vector<int>> allpermutation;
      vector<int>ans;
      permutation(nums,ans,0,allpermutation);
      return allpermutation;  
    }
};
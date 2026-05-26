class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
      int n=nums.size();
      int l=0;
      int maxlen=0;
      int sum=0;
      int cnt=0;
      for(int r=0;r<n;r++){
        if(nums[r]==1){
            cnt++;
        }
        else{
            sum++;
        }
        if(sum<=k){
            maxlen=max(maxlen,r-l+1);
        }
        else{
            
            l++;
            if(nums[l-1]==0){
                sum=sum-1;
            }
        }
      } 
      return maxlen;
    }
};
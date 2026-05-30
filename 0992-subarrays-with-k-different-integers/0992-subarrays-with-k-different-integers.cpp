class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        int sum1=0;
        int sum=0;
        int count=0;
        int n=nums.size();
        map<int,int>mpp;
        while(r<nums.size()){
            mpp[nums[r]]++;
            if(mpp.size()<=k){
                count=count + r-l+1;
            }
            while(mpp.size()>k){
                if(l<n){
                    mpp[nums[l]]--;
                    if(mpp[nums[l]]==0){
                        mpp.erase(nums[l]);
                    }
                    l++;
                    if(mpp.size()<=k){
                        count=count + r-l+1;
                    }
                    
                    
                }
                }
                r++;
            }
            l=0;
          mpp.clear();
          r=0;
        int count1=0;
        while(r<nums.size()){
            mpp[nums[r]]++;
            if(mpp.size()<=k-1){
                count1=count1 + r-l+1;
            }
            while(mpp.size()>k-1){
            if(l<n){
                 mpp[nums[l]]--;{
                    if(mpp[nums[l]]==0){
                        mpp.erase(nums[l]);
                    }
                     l++;
                    if(mpp.size()<=k-1){
                        count1=count1 + r-l+1;
                    }
                    
                   
                }
            }
               
            }
            r++;
        }
            return count-count1;
        }
         
        

    };

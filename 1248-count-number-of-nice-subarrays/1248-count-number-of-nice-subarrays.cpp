class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int a=0;
        int b=0;
        int l=0;
        int r=0;
        int sum=0;
        int count=0;
        int n=nums.size();
        while(r<n){
            if(nums[r]%2!=0){
                sum++;
            }
            if(sum==k){
                b=sum;
                a=l;
                while(b==k){
                    count++;
                    if(nums[a]%2!=0){
                        b=b-1;
                        
                    }
                    a++;
                }
            }
            while(sum>k){
                if(l<n){
                    if(nums[l]%2!=0){
                    sum=sum-1;
                    l++;
                }
                else{
                    l++;
                }
                if(sum==k){
                    b=sum;
                a=l;
                while(b==k){
                    count++;
                    if(nums[a]%2!=0){
                        b=b-1;
                        
                    }
                    a++;
                }
                }
                }
                
            }
            r++;
        
        }
        return count;
            
        
    }
};
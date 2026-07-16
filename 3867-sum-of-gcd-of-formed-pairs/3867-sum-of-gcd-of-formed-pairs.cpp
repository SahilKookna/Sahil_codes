class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>gcd;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi=max(nums[i],maxi);
            int a=nums[i];
            int b=maxi;
            while(b!=0){
               int rem= a%b;
               a=b;
               b=rem; 
            }
            gcd.push_back(a);

        }
        sort(gcd.begin(),gcd.end());
        int n=gcd.size();
        long long ans=0;
        for(int i=0;i<n/2;i++){
            int a=gcd[n-1-i];
            int b=gcd[i];
            while(b!=0){
               int rem= a%b;
               a=b;
               b=rem; 
            }
            ans=ans+a;
        }
        return ans;
    }
};
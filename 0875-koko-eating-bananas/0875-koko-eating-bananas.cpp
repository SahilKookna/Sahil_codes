class Solution {
public:
    int minEatingSpeed(vector<int>& arr, int h) {
         int n=arr.size();
        int ans=0;
       
        int l=1;
        int r=*max_element(arr.begin(),arr.end());
        while(l<=r){
            int mid = l + (r - l) / 2;
           long long hr = 0;

            for(int i = 0; i < n; i++)
            {
                hr += (1LL * arr[i] + mid - 1) / mid;
            }
            if(hr<=h){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};
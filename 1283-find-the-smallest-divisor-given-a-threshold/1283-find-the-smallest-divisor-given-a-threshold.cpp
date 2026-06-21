class Solution {
public:
    int smallestDivisor(vector<int>& arr, int k) {
        int ans=INT_MAX;
        int a=0;
        int l=1;
        int r=*max_element(arr.begin(),arr.end());
        while(l<=r){
            int mid=l+(r-l)/2;
            for(int i=0;i<arr.size();i++){
                a=a+(arr[i] + mid - 1) / mid;
            }
            if(a>k){
                l=mid+1;
                a=0;
                continue;
            }
            else{
                ans=min(ans,mid);
                r=mid-1;
                a=0;
                continue;
            }
        }
        return ans;
    }
};
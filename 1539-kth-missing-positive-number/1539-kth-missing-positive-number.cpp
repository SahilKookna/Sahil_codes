class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l=0;
        int r=arr.size()-1;
        int index = arr.size();
        int a=0;
        while(l<=r){
            int mid=(l+r)/2;
            a=arr[mid]-(mid+1);
            if(a>=k){
                index=mid;
                r=mid-1;
            }
            else if(a<k){
               
                l=mid+1;
            }
        }
        if(index==0){
            return k;
        }
        
       int missing = arr[index-1] - index;
int remaining = k - missing;

return arr[index-1] + remaining;

    }
};
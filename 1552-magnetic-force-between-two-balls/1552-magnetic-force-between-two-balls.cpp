class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int ans=0;
        int l=1;
        int r=*max_element(position.begin(),position.end());
        while(l<=r){
            int mid=(l+r)/2;
            int count=1;;
            int last=position[0];
            for(int i = 1; i < position.size(); i++){
    if(position[i] - last >= mid){
        count++;
        last = position[i];
    }
}
            if(count<m){
                r=mid-1;
            }
            else{
                ans=mid;
                l=mid+1;
            }
        }
        return ans;
    }
};
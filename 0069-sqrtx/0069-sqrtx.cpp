class Solution {
public:
    int mySqrt(int x) {
        int l=1;
        int r=x;
        int sqrt=0;
        while(l<=r){
            long long mid=l+(r-l)/2;
            long long a=1LL*mid*mid;
            if(a>x){
                r=mid-1;
            }
            else{
                sqrt=mid;
                l=mid+1;
            }
        }
        return sqrt;
    }
};
class Solution {
public:
    int reverseBits(int n) {
        int k=0;
    int a=31;
        for(int i=0;i<=31;i++){
            int b=n&1;
            n=n>>1;
            k=k+(1<<a)*b;
            a--;
        }
        return k;
    }
};
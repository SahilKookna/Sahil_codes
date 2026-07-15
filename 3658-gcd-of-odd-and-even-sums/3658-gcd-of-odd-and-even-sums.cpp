class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        if(n==1){
            return 1;
        }
        int gcd=0;
        int odd=0;
        int even=0;
        for(int i=1;i<=2*n;i++){
            if(i%2==0){
                even=even+i;
            }
            else{
                odd=odd+i;
            }
        }
        int mini=min(odd,even);
        for(int i=2;i<=mini;i++){
            if(odd%i==0 && even%i==0){
                gcd=max(gcd,i);
            }
        }
        return gcd;
    }
};
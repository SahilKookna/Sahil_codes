class Solution {
public:
    bool checkDivisibility(int n) {
        int m=n;
        int sum=0;
        int product=1;
        while(n!=0){
            int a=n%10;
            sum=sum+a;
            product=product*a;
            n=n/10;

        }
        int b=sum+product;
        if(m%b==0){
            return true;
        }
        else{
            return false;
        }
    }
};
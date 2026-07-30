class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor==-1){
            return INT_MAX;
        }
        long long dvd=dividend;
        long long dvs=divisor;
        // bool divd=false;
        // bool divi=false;
        if(dvd<0){
            //divd=true;
            dvd=-dvd;
        }
        if(dvs<0){
            //divi=true;
            dvs=-dvs;
        }
        if(dvd<dvs){
            return 0;
        }
        long long q=0;
        while(dvd>=dvs){
            long long b=1;
            long long a=dvs;
            while((a << 1) <= dvd ){
                a=a<<1;
                b=b<<1;
              
            }
           // long long j=1LL*i*dvs;
            dvd=dvd-a;
            q=q+b;
        }
        if(dividend<0 && divisor<0){
             return q;
        }
        else if(dividend<0 && divisor>0 ||dividend>0 && divisor<0){
            return -q;
        }
        else{
            return q;
        }
       
    }
};
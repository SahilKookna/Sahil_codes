class Solution {
public:
    bool isPowerOfFour(int n) {
        for(int i=0;i<31;i++){
            long a=pow(4,i);
            if(n==a){
                return true;
            }
        }
        return false;
    }
};
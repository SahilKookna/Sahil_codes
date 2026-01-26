class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int j=0; j<31;j++){
            long a=pow(2,j);
            if(n==a){
                return true;
            }
        }
        return false;
    }
};
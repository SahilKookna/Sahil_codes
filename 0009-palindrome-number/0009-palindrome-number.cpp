class Solution {
public:
    bool isPalindrome(int x) {
        int original=x;
        if(x<0){
            return false;
        }
        long long answer=0;
        while(x!=0){
            int a=x%10;
            answer=answer*10+a;
            x=x/10;
        }
        if(original==answer){
            return true;
        }
        else {
            return false;
        }
        
    }
};
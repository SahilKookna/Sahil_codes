class Solution {
public:
    bool helper(string s,int left,int right){
        int a=left;
        int b=right;
        while(a<b){
            if(s[a]==s[b]){
                a++;
                b--;
            }else{
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n=s.size();
        int l=0;
        int r=n-1;
        while(l<r){
            if(s[l]==s[r]){
                l++;
                r--;
            } else{
                return (helper(s,l+1,r)|| helper(s,l,r-1));
            }
        }
        return true;
    }
};
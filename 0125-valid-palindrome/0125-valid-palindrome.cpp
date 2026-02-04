class Solution {
public:
    bool isPalindrome(string s) {
        
        string result="";
        for(char c:s){
            if(isalnum(c)){
                result+=tolower(c);
            }
        }
        swap(s,result);
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]!=s[n-1-i]){
                return false;
            }
        }
        return true;
    }
};
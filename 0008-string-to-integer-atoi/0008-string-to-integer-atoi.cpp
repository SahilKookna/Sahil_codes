class Solution {
public:
    int myAtoi(string s) {
        
        long long x=0;
        int a=0;
        int c=0;
        string ans;
        int b=0;
        long long num=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' ' && (b!=1)){

            }
            else if((s[i]=='-' || s[i]=='+') && (b!=1)){
                if(s[i]=='-'){
                         a=-1;
                }
                else{
                     a=1;
                }           
                   b=1;   
            }
        
            
            else if(!isdigit(s[i])){
                break;
            }
            else if(isdigit(s[i])){
                b=1;
                int digit = s[i] - '0';
                num=1LL*num*10+ digit;
               if(a!=0){
                
                x=(a)*num;
                if(x<INT_MIN){
                return INT_MIN;
            }
            else if(x>INT_MAX){
                return INT_MAX;
            }
            }else{
                x=num;
                if(x<INT_MIN){
                return INT_MIN;
            }
            else if(x>INT_MAX){
                return INT_MAX;
            }
            }
                
            }
        }
         
        
         
        
        // if(x<INT_MIN){
        //     return INT_MIN;
        // }
        // else if(x>INT_MAX){
        //     return INT_MAX;
        // }
        return x;
    }
};
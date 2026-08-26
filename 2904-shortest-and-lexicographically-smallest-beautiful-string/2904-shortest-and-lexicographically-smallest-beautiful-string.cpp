class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans;
        int l=0;
        int r=0;
        int a=0;
        bool first=false;
        while(r<s.size()){
            if(s[r]=='1'){
                a++;
                if(!first){
                    first=true;
                    l=r;
                }
            }
            if(a==k){
                int b=r-l+1;
                if(ans.empty()){
                    ans=s.substr(l,r-l+1);
                }
                else{
                    if(ans.size()>b){
                         ans=s.substr(l,r-l+1);
                    }
                    else if(ans.size()==b){
                        int i=0;
                        int j=l;
                       while(i<ans.size() && j<=r){
                            if(ans[i]==s[j]){
                                j++;
                                i++;
                            }
                            else if(ans[i]>s[j]){
                                ans=s.substr(l,r-l+1);
                                break;
                            }
                            else{
                                 break;
                            }
                        }


                    }
                    
                }
                l++;
                    a--;
                    while(l<s.size() && s[l]!='1'){
                        l++;
                        
                    }
            }
            r++;
        }
        return ans;
    }
};
    class Solution {
    public:
        string minWindow(string s, string t) {
            string r;
            int start=0;
            int minlen=INT_MAX;
            int formed=0;
            int m=s.size();
            int n=t.size();
            map<int,int>mpp;
            map<int,int>mpp1;
            int y=0;
            int l=0;
            while(y<n){
                mpp[t[y]]++;
                y++;
            }

            int j=0;
            
                while(j<m){
                    if(mpp.find(s[j]) != mpp.end()){
                        mpp1[s[j]]++;
                        if(mpp1[s[j]]==mpp[s[j]]){
                            formed++;
                        }
                        while(formed==mpp.size()){

                           if(j-l+1 < minlen)
                            {
                                minlen = j-l+1;
                                start=l;
                            }
                            if(mpp.find(s[l]) != mpp.end()){
                                mpp1[s[l]]--;
                            if(mpp1[s[l]]<mpp[s[l]]){
                                formed--;
                            }
                            }
                            
                            l++;
                        }
                    }
                        
                        j++;
                        
                    }
                    
               if(minlen==INT_MAX){
                return "";
               } 
               else{
                return r=s.substr(start,minlen);
               }
            }
            
            };
        
        
class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int maxlen=0;
        map<char,int>mpp;
        for(int r=0;r<s.size();r++){
            mpp[s[r]]++;
            int maxi = 0;
            for(auto it : mpp)
            {
                maxi = max(maxi, it.second);
            }   

            if((r-l+1)-maxi>k){
                mpp[s[l]]--;
                l++;
            }  
            else{
                maxlen=max(maxlen,r-l+1);
            }      
        }
        return maxlen;
    }
};
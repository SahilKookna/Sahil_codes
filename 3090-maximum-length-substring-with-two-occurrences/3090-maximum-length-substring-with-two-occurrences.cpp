class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l=0;
        int r=0;
        int size=0;
        unordered_map<int,int>mpp;
        while(r<s.size()){
               mpp[s[r]]++;
            while(mpp[s[r]]>2){
                mpp[s[l]]--;
                l++;
            }
            //   mpp[s[r]]++;
            size=max(r-l+1,size);
            r++;

        }
        return size;
    }
};
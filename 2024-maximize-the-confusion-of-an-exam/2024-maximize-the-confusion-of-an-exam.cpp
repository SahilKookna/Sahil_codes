class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int maxlen=0;
        int l=0;
        map<int,int>mpp;
        for(int r=0;r<answerKey.size();r++){
            mpp[answerKey[r]]++;
            int maxi=0;
            for(auto it:mpp)
            maxi=max(maxi,it.second);
            if((r-l+1)-maxi>k){
                mpp[answerKey[l]]--;
                l++;
            }
            else{
                maxlen=max(maxlen,r-l+1);
            }
        }
        return maxlen;
    }
};
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
         int maxlen=0;
         int n= fruits.size();
         map<int,int>mpp;
         int l=0;
         for(int r=0;r<n;r++){
            mpp[fruits[r]]++;
            if(mpp.size()>2){
                while(mpp.size()>2){
                    mpp[fruits[l]]--;
                    if(mpp[fruits[l]]==0){
                        mpp.erase(fruits[l]);
                    }
                    l++;
                }
            }
            maxlen=max(maxlen,r-l+1);
         }
         return maxlen;
    }
};
class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        if(n<=2){
            return 0;
        }
        vector<bool> v(n,true);
        v[0]=false;
        v[1]=false;
        for(int i=2;i*i<n;i++){
            if(v[i]){
                for(int j=i*i;j<n;j+=i){
                    v[j]=false;
                }
            }
        }
        for(int i=2;i<n;i++){
            if(v[i]){
                count++;
            }
        }
        return count;
    }
};
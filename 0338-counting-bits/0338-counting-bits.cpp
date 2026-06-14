class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v;
        int cnt=0;
        v.push_back(0);
        for(int i=1;i<=n;i++){
            cnt=0;
            int m=i;
            while(m!=0){
                m=m&(m-1);
                cnt++;
            }
            v.push_back(cnt);

        
            
        }
        return v;
    }
};
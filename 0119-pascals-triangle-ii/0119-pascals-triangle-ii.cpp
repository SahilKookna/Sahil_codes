class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<=rowIndex;i++){
            v1=v2;
            v2.clear();
            for(int j=0;j<=i;j++){
                if(j==0 || j==i){
                    v2.push_back(1);
                }
                else{
                    int a=v1[j-1]+v1[j];
                    v2.push_back(a);
                }
            }
            
        }
        return v2;
    }
};
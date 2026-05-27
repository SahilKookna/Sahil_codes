class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=fruits.size();
        int m=baskets.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(fruits[i]<=baskets[j]){
                    m--;
                    baskets.erase(baskets.begin()+j);
                    break;
                }
            }
        }
        return m;

    }
};
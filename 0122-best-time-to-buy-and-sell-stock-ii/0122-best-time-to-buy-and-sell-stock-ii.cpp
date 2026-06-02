class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=INT_MAX;
        int sum=0;
        int maxprofit=0;
        for(int i=0;i<prices.size();i++){
            minprice=min(minprice,prices[i]);
            maxprofit=max(maxprofit,prices[i]-minprice);
            if(maxprofit>0){
                sum=sum+maxprofit;
                maxprofit=0;
                minprice=INT_MAX;
                i--;
            }
        }
        return sum;
    }
};
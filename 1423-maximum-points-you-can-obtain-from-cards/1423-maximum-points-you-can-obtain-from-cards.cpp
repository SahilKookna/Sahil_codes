class Solution {
public:

    int maxScore(vector<int>& cardPoints, int k) {

        int n = cardPoints.size();

        int sum = 0;

        // take first k elements
        for(int i=0; i<k; i++)
        {
            sum += cardPoints[i];
        }

        int maxsum = sum;

        int right = n-1;

        // sliding window
        for(int i=k-1; i>=0; i--)
        {
            sum = sum - cardPoints[i];

            sum = sum + cardPoints[right];

            right--;

            maxsum = max(maxsum, sum);
        }

        return maxsum;
    }
};
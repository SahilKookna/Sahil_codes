class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();

        int l = 0;

        int count = 0;

        map<char,int> mpp;

        for(int r=0; r<n; r++)
        {
            mpp[s[r]]++;

            while(mpp['a'] > 0 &&
                  mpp['b'] > 0 &&
                  mpp['c'] > 0)
            {
                count = count + (n-r);

                mpp[s[l]]--;

                l++;
            }
        }

        return count;
    }
};
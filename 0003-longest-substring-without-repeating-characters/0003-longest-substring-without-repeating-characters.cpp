class Solution {
public:

    int lengthOfLongestSubstring(string s) {

        int l = 0;

        int maxlen = 0;

        map<char,int> mpp;

        for(int r=0; r<s.length(); r++)
        {
            mpp[s[r]]++;

            while(mpp[s[r]] > 1)
            {
                mpp[s[l]]--;

                l++;
            }

            maxlen = max(maxlen, r-l+1);
        }

        return maxlen;
    }
};
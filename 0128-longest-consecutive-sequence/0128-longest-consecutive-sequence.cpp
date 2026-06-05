class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int maxcount=INT_MIN;
        int curr;
        if(n==0){
            return 0;
        }
        unordered_set<int>st;
        int count=1;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                curr=it;
                count=1;
                while(st.find(curr+1)!=st.end()){
                    count++;
                    curr++;

                }
                maxcount=max(maxcount,count);
            }
        }
        return maxcount;
    }
};
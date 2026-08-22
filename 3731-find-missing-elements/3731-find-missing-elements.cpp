class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
       auto it = *min_element(nums.begin(), nums.end());
       int smallest=it;
       auto it2 = *max_element(nums.begin(), nums.end());
       int largest=it2;
       unordered_set<int> st(nums.begin(), nums.end());

        for(int i = smallest; i <= largest; i++){
            if(st.find(i) == st.end())
                ans.push_back(i);
        }

        return ans;

    }
};
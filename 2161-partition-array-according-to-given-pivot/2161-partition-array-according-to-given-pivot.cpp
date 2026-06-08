class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int index=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==pivot){
                index++;
            }
        }
        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                v1.push_back(nums[i]);

            }
            else if(nums[i]>pivot){
                v2.push_back(nums[i]);
            }
        }
        for(int i=0;i<index;i++){
            v1.push_back(pivot);
        }
        for(int i=0;i<v2.size();i++){
            v1.push_back(v2[i]);
        }
        return v1;
        
    }
};
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int a=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                nums.erase(nums.begin()+i);
                a++;
                i--;
            }
        }
        
        
        for(int k=0;k<a;k++){
            nums.push_back(0);
        }

    }
};
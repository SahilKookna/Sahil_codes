class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int leftmax=INT_MIN;
        int rightmax=INT_MIN;
        int area=0;
        while(left<=right){
            leftmax=max(leftmax,height[left]);
            rightmax=max(rightmax,height[right]);
            if(leftmax<rightmax){
                area=area+leftmax-height[left];
                left++;
            }
            else{
                area=area+rightmax-height[right];
                right--;
            }
        }
        return area;
    }
};
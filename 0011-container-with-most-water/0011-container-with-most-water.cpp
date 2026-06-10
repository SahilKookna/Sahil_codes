class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int maxarea=INT_MIN;
        int right=height.size()-1;
        while(left<right){
            int area=(right-left)*min(height[left],height[right]);
            maxarea=max(maxarea,area);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxarea;
    }
};
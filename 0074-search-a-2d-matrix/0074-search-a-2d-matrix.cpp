class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int l=0;
      int r=matrix.size()-1;
      while(l<=r){
        int mid=l+(r-l)/2;
        int l1=0;
        int r1=matrix[0].size()-1;
        while(l1<=r1){
            int mid1=l1+(r1-l1)/2;
            if(matrix[mid][mid1]==target)return true;
            else if(matrix[mid][mid1]>target){
                r=mid-1;
                r1=mid1-1;

            }
            else{
                l=mid+1;
                l1=mid1+1;
            }
        }
      } 
      return false; 
    }
};
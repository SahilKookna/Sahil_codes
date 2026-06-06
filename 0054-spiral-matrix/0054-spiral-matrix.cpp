class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int col=matrix[0].size();
        int row=matrix.size();
        vector<int>v;
        int top=0;
        int bottom=row-1;
        int left=0;
        int right=col-1;
        
        while(top <= bottom && left <= right){
            //top row
            
                for(int i=left;i<=right;i++){
                v.push_back(matrix[top][i]);
            }
            
            top++;
            
            
         
            //right col
           
                for(int i=top;i<=bottom;i++){
                v.push_back(matrix[i][right]);
                
            }
            
            right--;
            
            //bottom row
            if(top <= bottom){
                for(int i=right;i>=left;i--){
                v.push_back(matrix[bottom][i]);
            }
            }
            bottom--;
            

            //first col
            if(left <= right){
                for(int i=bottom;i>=top;i--){
                v.push_back(matrix[i][left]);
            }
            }
            left++;
            

        } 
        return v;
    }
};
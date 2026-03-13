class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=i+1;j<matrix[0].size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int a=0;a<matrix.size();a++){
            for(int b=0;b<matrix[0].size()/2;b++){
                swap(matrix[a][b],matrix[a][matrix[0].size()-(b+1)]);
            }
        }
    }
};
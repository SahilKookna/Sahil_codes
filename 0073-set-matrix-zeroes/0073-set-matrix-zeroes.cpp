class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
     vector<int>row;
     vector<int>col;

     int r=matrix.size();
     int c=matrix[0].size();
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(matrix[i][j]==0){
                col.push_back(j);
                row.push_back(i);
            }
        }
     }
     for(int a=0;a<row.size();a++){
        for(int b=0;b<c;b++){
            matrix[row[a]][b]=0;
        }
        
     }
     for(int a=0;a<col.size();a++){
        for(int b=0;b<r;b++){
            matrix[b][col[a]]=0;
        }
        
     }



    }
};
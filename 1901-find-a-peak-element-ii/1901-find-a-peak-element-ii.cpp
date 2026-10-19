class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        vector<int> v;
        int n=mat.size();
        int m=mat[0].size();
        int l=0;
        int r=m-1;
        if (m == 1) {
    int row = 0;

    for (int i = 1; i < n; i++) {
        if (mat[i][0] > mat[row][0]) {
            row = i;
        }
    }

    return {row, 0};
}
        while(l<=r){
            int mid=l+(r-l)/2;
            int row=0;
            for(int i=1;i<n;i++){
                if(mat[i][mid]>mat[row][mid]){
                    row=i;
                }  
            }
            if(mid==0){
                if(mat[row][mid]>mat[row][mid+1]){
                    return {row,mid};
                }
                else{
                    l=mid+1;
                }
            }
            else if(mid==m-1){
                if(mat[row][mid]>mat[row][mid-1]){
                    return {row,mid};
                }
                else{
                    r=mid-1;
                }
            }
            else{
                if(mat[row][mid]>mat[row][mid+1] && mat[row][mid]>mat[row][mid-1]){
                    return {row,mid};
                }
                else if(mat[row][mid]<mat[row][mid+1]){
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }
        }
        return {};
    }
};
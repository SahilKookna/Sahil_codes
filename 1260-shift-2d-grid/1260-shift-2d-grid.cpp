class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

        int n = grid.size();
        int m = grid[0].size();

        k %= (n * m);
        if (k == 0) return grid;

        vector<vector<int>> ans(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (j + k < m) {
                    ans[i][j + k] = grid[i][j];
                }
                else {

                    int total = j + k;

                    int a = (i + total / m) % n;
                    int b = total % m;

                    ans[a][b] = grid[i][j];
                }
            }
        }

        return ans;
    }
};
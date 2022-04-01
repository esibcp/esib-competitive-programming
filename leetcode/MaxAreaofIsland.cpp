// Author : Emmanuel Abdelnour et Charbel Farah
// Max Area of Island : https://leetcode.com/problems/max-area-of-island/
// accepted on leetcode, dfs approach.

class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxi = 0;
        // we need to traverse the entire grid.
        for(int i = 0; i<grid.size(); ++i){
            for(int j = 0; j<grid[0].size(); ++j){
                if(grid[i][j] == 1){
                    maxi = max(dfs(grid, i, j), maxi);
                }
            }
        }
        return maxi;
    }
    int dfs(vector<vector<int>>& grid, int row, int col){
        // we return 0 if we are outside the grid or if the position is 0
        if(row >= grid.size() 
        || col >= grid[0].size()
        || row < 0 || col < 0
        || grid[row][col] == 0) return 0; 
        grid[row][col] = 0;
        //otherwise we recur to neighbour cells(right, left, up and down).
        return 1 + dfs(grid, row+1, col) + dfs(grid, row-1, col) + dfs(grid, row, col+1) + dfs(grid, row, col-1);
    }
};
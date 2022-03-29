// Emmanuel Abdelnour
// solved with backtracking
// accepted on leetcode

class Solution {
public:
    bool hasQueen(int i, int j, int deltaX, int deltaY, vector<string>& X) {
        // This function checks wether there's a queen in current line,
        // from a position (i, j)
        int N = X.size();
        int row = i + deltaY;
        int col = j + deltaX;
        bool hasQ(false);

        while (row >= 0 && row < N && col >= 0 && col < N) {
            if(X[row][col] == 'Q') {
                hasQ = true;
                break;
            }
            row += deltaY;
            col += deltaX;
        }

        return hasQ;
    }
    void solve(int column, vector<string>& X, vector<vector<string>>& res) {
        int N = X.size();
        bool has_queen;
        if (column == N) { 
            // we add the found solution 'X' to res.
            res.push_back(X);
            return;
        }
        for (int i = 0; i < N; i++) {
            //check number of queens in columns and diagonals
            has_queen = hasQueen(i, column, -1, 0, X);
            has_queen += hasQueen(i, column, 1, 0, X);
            has_queen += hasQueen(i, column, -1, -1, X);
            has_queen += hasQueen(i, column, 1, -1, X);
            has_queen += hasQueen(i, column, -1, 1, X);
            has_queen += hasQueen(i, column, 1, 1, X);
            if (!has_queen) { // if there is no queen, then (i, column) is a safe position.
                X[i][column] = 'Q'; // Place a queen.
                solve(column + 1, X, res); // Recur to the next column.
                X[i][column] = '.'; // Remove the queen (backtracking).
            }
        }
    }
    void init(vector<string>& X, int N) {
        string s;
        for(int i(0); i < N; i++) s.push_back('.');
        for (int i(0); i < N; i++) X.push_back(s);
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board;
        init(board, n);
        vector<vector<string>> res;
        solve(0, board, res);
        return res;
    }
};
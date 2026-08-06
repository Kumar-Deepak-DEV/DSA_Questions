class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_set<int> s = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.')
                    continue;
                if (s.count(board[i][j]))
                    s.erase(board[i][j]);
                else
                    return false;
            }
        }
        for (int i = 0; i < 9; i++) {
            unordered_set<int> s = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
            for (int j = 0; j < 9; j++) {
                if (board[j][i] == '.')
                    continue;
                if (s.count(board[j][i]))
                    s.erase(board[j][i]);
                else
                    return false;
            }
        }
        for (int i = 0; i < 3; i++) {
            unordered_set<int> s = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
            for (int j = 3*i; j < 3*i+3; j++) {
                for (int k = 0; k < 3; k++) {
                    if (board[j][k] == '.')
                        continue;
                    if (s.count(board[j][k]))
                        s.erase(board[j][k]);
                    else
                        return false;
                }
            }
            s = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
            for (int j = 3*i; j < 3*i+3; j++) {
                for (int k = 3; k < 6; k++) {
                    if (board[j][k] == '.')
                        continue;
                    if (s.count(board[j][k]))
                        s.erase(board[j][k]);
                    else
                        return false;
                }
            }
            s = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
            for (int j = 3*i; j < 3*i+3; j++) {
                for (int k = 6; k < 9; k++) {
                    if (board[j][k] == '.')
                        continue;
                    if (s.count(board[j][k]))
                        s.erase(board[j][k]);
                    else
                        return false;
                }
            }
        }
        return true;
    }
};
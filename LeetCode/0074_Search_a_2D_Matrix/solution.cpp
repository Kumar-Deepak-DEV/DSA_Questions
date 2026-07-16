class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0;
        int j = matrix.size() - 1;
        int mid;
        while (i <= j) {
            mid = (i + j) / 2;
            if (matrix[mid][0] == target)
                return true;
            else if (target > matrix[mid][0])
                i = mid + 1;
            else
                j = mid - 1;
        }
        if (i == 0) return false;
        if (i > 0)
            i -= 1;
        int k = i;
        i = 0;
        j = matrix[i].size() - 1;
        mid = 0;
        while (i <= j) {
            mid = (i + j) / 2;
            if (matrix[k][mid] == target)
                return true;
            else if (target > matrix[k][mid])
                i = mid + 1;
            else
                j = mid - 1;
        }
        return false;
    }
};
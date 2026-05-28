class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int a = coordinates[0] - 'a' + 1;
        int b = coordinates[1] - '0';
        if ((a % 2 == 0 && b % 2 == 1) || (a % 2 == 1 && b % 2 == 0))
            return true;
        else
            return false;
    }
};
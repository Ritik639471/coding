// Last updated: 4/13/2026, 3:40:28 PM
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        int r1 = 0, r2 = n - 1, c1 = 0, c2 = n - 1, a = 1;
        n *= n;
        while (r1 <= r2 && c1 <= c2) {
            for (int i = c1; i <= c2; i++) matrix[r1][i] = a++;
            r1++;
            if (n < a) return matrix;
            for (int i = r1; i <= r2; i++) matrix[i][c2] = a++;
            c2--;
            if (n < a) return matrix;
            for (int i = c2; i >= c1; i--) matrix[r2][i] = a++;
            r2--;
            if (n < a) return matrix;
            for (int i = r2; i >= r1; i--) matrix[i][c1] = a++;
            c1++;
            if (n < a) return matrix;
        }
        return matrix;
    }
};
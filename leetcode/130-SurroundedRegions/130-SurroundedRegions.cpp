// Last updated: 4/13/2026, 3:39:05 PM
class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int dir[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        int m = board.size(), n = board[0].size();
        vector<vector<bool>> a(m, vector<bool>(n));
        queue<pair<int, int>> q;
        pair<int, int> c;
        int ro, co;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 'O' && (!a[i][j])) {
                    q.push({i, j});
                    bool flag = true;
                    a[i][j] = true;
                    while (!q.empty()) {
                        c = q.front();
                        q.pop();
                        if (c.first == 0 || c.second == 0 ||c.second == n - 1 || c.first == m - 1) flag = false;
                        for (int i = 0; i < 4; i++) {
                            ro = c.first + dir[i][0];
                            co = c.second + dir[i][1];
                            if (ro < 0 || ro >= m || co >= n || co < 0 || board[ro][co] == 'X' || a[ro][co]) continue;
                            a[ro][co] = true;
                            q.push({ro, co});
                        }
                    }
                    if (flag) {
                        q.push({i, j});
                        board[i][j]='X';
                        while (!q.empty()) {
                            c = q.front();
                            q.pop();
                            for (int i = 0; i < 4; i++) {
                                ro = c.first + dir[i][0];
                                co = c.second + dir[i][1];
                                if (ro < 0 || ro >= m || co >= n || co < 0 ||board[ro][co] == 'X') continue;
                                board[ro][co]='X';
                                q.push({ro, co});
                            }
                        }
                    }
                }
            }
        }
    }
};
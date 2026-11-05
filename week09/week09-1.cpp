// week09-1.cpp 學習計畫 Martix 第二題
// LeetCode 1572. Martix Diagonal Sum

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int N = mat.size();
        int ans = 0;

        /*
        for (int i = 0; i < N; i++) {
            ans += mai[i][i];
        }
        for (int i = 0; i < N; i++) {
            ans += may[N - 1 - i][i];
        }
        if (N % 2 == 1)ans += mat[N / 2][N / 2];
        */

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i == j || i + j == N - 1) ans += mat[i][j];
            }
        }
        return ans;
    }
};

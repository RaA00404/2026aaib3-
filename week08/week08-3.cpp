// week08-3.cpp 學習計畫 Martix 第三題
// LeetCode 54. Spiral Martrix 螺旋矩陣，繞圈圈輸出

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size(); // 長、寬
        vector<int> ans;
        int left = 0, right = N - 1, up = 0, down = M - 1;
        // 中間要繞圈圈 四個方向：往右、往下、往左、往上

        while (ans.size() < M * N) {
            /*
                int i , j;

                i = up;     // 最上面這條要往右
                for (int j = left; j <= right; j++) {   // 往右
                    ans.push_back(matrix[i][j]);
                }
                up++;       // 走完了最上面這條，整條刪掉

                j = right;  // 最右邊這條要往下
                for (int i = up; i <= down; i++) {      // 往下
                    ans.push_back(matrix[i][j]);
                }
                right--;    // 走完了最下面這條，整條刪掉

                if (ans.size() == M * N) break;

                i = down;   //  最下面這條要往左
                for (int j = right; j >= left ; j--) {  // 往左
                    ans.push_back(matrix[i][j]);
                }
                down--;     // 走完了最下面這條，整條刪掉

                j = left;   // 最左邊這條要往上
                for (int i = down; i >= up; i--) {      // 往上
                    ans.push_back(matrix[i][j]);
                }
                left++;     // 走完了最左邊這條，整條刪掉
            */

            for (int j = left; j <= right; j++) ans.push_back(matrix[up][j]);
            up++;

            for (int i = up; i <= down; i++) ans.push_back(matrix[i][right]);
            right--;

            if (ans.size() == M * N) break;

            for (int j = right; j >= left; j--) ans.push_back(matrix[down][j]);
            down--;

            for (int i = down; i >= up; i--) ans.push_back(matrix[i][left]);
            left++;
        }
        return ans;
    }
};

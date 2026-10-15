// week02-4.cpp 學習計畫 Basic 第二題
// LeetCode 389. Find the Differeence

class Solution {
public:
    char findTheDifference(string s, string t) {
        int U[26] = {};    // 資源回收桶
        for (char c : s) {  // C++ 進階 for 迴圈寫法
            U[c - 'a'] ++;  // 把字母放進對應的回收桶裡
        }
        for (char c : t) {
            U[c - 'a'] --;  // 把對應的回收桶拿掉一個字母
            if (U[c - 'a'] < 0) return c;   // 如果字母不夠用，找到兇手
        }
        return 0;
    }
};

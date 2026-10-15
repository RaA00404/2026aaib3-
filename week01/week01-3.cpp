
// week01-3.cpp 學習計畫 Basic 第三題
// LeetCode 28. Find the index of the First Dccurrence in a String
// 大海撈針
// 寫程式只要會判斷：if(判斷), for(迴圈), 函式

class Solution {
public:
    int strStr(string haystack, string needle) {
        // 找到字串的長度 .length()
        int N1 = haystack.length(), N2 = needle.length();

        for (int i = 0; i <= N1-N2; i++) {
            if (haystack.substr(i, N2) == needle) return i;
            // 字串的小字串 .substr(i開始, 長度) vs. needle 相同
        }
        return -1;
    }
};

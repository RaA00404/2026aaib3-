// week12-3.cpp 學習計畫 Linked List 第三題
// LeetCode 2. Add Two Numbers

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(999);          // 上週教的工具1
        ListNode* now = ans;                        // 上週教的工具2
        int carry = 0;                              // 進位， week12重點

        while (l1 != nullptr || l2 != nullptr || carry!= 0) {
            if (l1 != nullptr) carry += l1->val;    // 如果 l1 還有，就把 val 加進去
            if (l2 != nullptr) carry += l2->val;    // 如果 l2 還有，就把 val 加進去
            now->next = new ListNode(carry % 10);
            carry /= 10;                            // 進位， week12重點
            now = now->next;
            if (l1 != nullptr) l1 = l1->next;       // 如果還有，才能換下一筆
            if (l2 != nullptr) l2 = l2->next;       // 如果還有，才能換下一筆
        }

        // 下方版本無法處理"長度不同"的情況
        /*
        while(l1 != nullptr && l2 != nullptr) {     // 上週教的工具2
            int val = l1->val + l2->val + carry;    // 今天要做加法，進位， week12重點
            now->next = new ListNode(val % 10);     // 上週教的工具2 (只能留下個位數)
            carry = val / 10;                       // 進位， week12重點
            now = now->next;                        // 上週教的工具2
            l1 = l1->next;                          // 上週教的工具2
            l2 = l2->next;                          // 上週教的工具2
        }
        */

        if (carry) now->next = new ListNode(carry); // 離開迴圈後，如果還有carry進位，不能混掉
        return ans->next;                           // 上週教的工具1
    }
};

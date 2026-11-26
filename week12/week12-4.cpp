// week12-5.cpp 學習計畫 Linked List 第四題
// 445. Add Two Numbers II 很大的數的加法，但個位數沒有對齊

class Solution {
public:
    ListNode* reverse(ListNode*head) {
        vector<int> a;  // 伸縮自如的陣列。要把 Linked List 裡面的值 copy 到陣列
        while (head != nullptr) {
            a.push_back(head->val);
            head = head->next;
        }
        ListNode* ans = new ListNode(999);
        ListNode* now = ans;
        for (int i = a.size()-1; i >= 0; i--) {
            now->next = new ListNode(a[i]);
            now = now->next;
        }
        return ans->next;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);

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

        if (carry) now->next = new ListNode(carry); // 離開迴圈後，如果還有carry進位，不能混掉
        return reverse(ans->next);                  // 上週教的工具1
    }
};

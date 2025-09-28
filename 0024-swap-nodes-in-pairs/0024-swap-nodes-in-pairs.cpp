class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (slow && fast) {
            swap(slow->val, fast->val);
            slow = fast->next;
            fast = slow ? slow->next : nullptr;
        }
        return head;
    }
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* t1 = list1;
        ListNode* t2 = list2;
        
        // pick correct head
        ListNode* head = nullptr;
        if (!t1) return t2;
        if (!t2) return t1;
        if (t1->val <= t2->val) {
            head = t1;
            t1 = t1->next;
        } else {
            head = t2;
            t2 = t2->next;
        }

        ListNode* curr = head;

        while (t1 != nullptr && t2 != nullptr) {
            if (t1->val <= t2->val) {
                curr->next = t1;
                t1 = t1->next;
            } else {
                curr->next = t2;
                t2 = t2->next;
            }
            curr = curr->next;
        }

        // attach leftover nodes
        if (t1) curr->next = t1;
        else curr->next = t2;

        return head;
    }
};

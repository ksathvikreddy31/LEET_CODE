class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode gc(0);
        ListNode* gx = &gc;
        ListNode lc(0);
        ListNode* lx = &lc;

        if (!head) return head;

        ListNode* temp = head;
        while (temp != nullptr) {
            ListNode* newnode = temp->next; // store next
            temp->next = nullptr;           // detach current node

            if (temp->val < x) {
                lx->next = temp;
                lx = lx->next;
            } else {
                gx->next = temp;
                gx = gx->next;
            }

            temp = newnode;
        }

        gx->next = nullptr;      // terminate >= x list
        lx->next = gc.next;      // merge lists

        return lc.next;          // skip dummy head
    }
};

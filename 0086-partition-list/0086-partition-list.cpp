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
            ListNode* newnode = temp->next; 
            temp->next = nullptr;           

            if (temp->val < x) {
                lx->next = temp;
                lx = lx->next;
            } else {
                gx->next = temp;
                gx = gx->next;
            }

            temp = newnode;
        }

        gx->next = nullptr;     
        lx->next = gc.next;   

        return lc.next;        
    }
};

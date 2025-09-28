/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head||k==1) return head;
        
        // ListNode* prev=nullptr;
        ListNode* curr=head;
        // int c=1;
        ListNode* pgn=nullptr;
        ListNode* nn=nullptr;

        while(true)
        {
            ListNode* node=curr;
            int i=0;
            for(;i<k&&node;i++)
            {
                node=node->next;
            }
            if(i<k) break;
            ListNode* prev=nullptr;
            ListNode* gs=curr;
            int j=0;
            while(j<k){
                ListNode* nn=curr->next;
                curr->next=prev;
                prev=curr;
                curr=nn;
                j++;
            }
            if(!nn) nn=prev;
            if(pgn) pgn->next=prev;
            pgn=gs;

        }
        if(pgn) pgn->next=curr;
        return nn?nn:head;
    }
};
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *temp=head;
        // temp=head;
        set<int>st;
        while(temp!=nullptr)
        {
            st.insert(temp->val);
            temp=temp->next;
        }
        ListNode *newhead=nullptr;
        ListNode *tail=nullptr;

        for(int v:st)
        {
            ListNode *temp1=new ListNode(v);
            if(newhead==nullptr)
            {
                newhead=temp1;
                tail=temp1;
            }
            else{
                tail->next=temp1;
                tail=tail->next;
            }

        }
        return newhead;
    }
};
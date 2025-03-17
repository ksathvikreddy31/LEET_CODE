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
    ListNode* sortList(ListNode* head) {
        if(!head||!head->next) return head;
        vector<int>vec;
        // int temp;
        ListNode* temp=head;
        while(temp)
        {
            vec.push_back(temp->val);
            temp=temp->next;
        }
        sort(vec.begin(),vec.end());
        ListNode*dummy=new ListNode(0);
        ListNode*curr=dummy;
        for(int num:vec)
        {
            curr->next=new ListNode(num);
            curr=curr->next;
        }
        return dummy->next;
       
        

    }
};
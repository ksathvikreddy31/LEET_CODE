/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==nullptr||head->next==nullptr) return false;
        ListNode* temp=head;
        map<ListNode*,int>mp;
        while(temp!=nullptr)
        {
            if(mp.find(temp)!=mp.end())
            {
                return true;
            }
            mp[temp]=1;
            temp=temp->next;
        }
        return false;
    }
};
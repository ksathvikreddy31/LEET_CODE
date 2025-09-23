class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *temp = head;
        string s = "";

        // Build string from linked list
        while (temp != nullptr) {
            s += to_string(temp->val);
            temp = temp->next;
        }

        // Check palindrome
        string rev = s;
        reverse(rev.begin(), rev.end());

        return s == rev;
    }
};

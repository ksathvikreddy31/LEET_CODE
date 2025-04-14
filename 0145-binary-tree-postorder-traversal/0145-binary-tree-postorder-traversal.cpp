class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        TreeNode *curr = root;
        vector<int> vec;
        if (root == NULL) return vec;

        stack<TreeNode*> st;
        TreeNode *lastVisited = nullptr;

        while (!st.empty() || curr != NULL) {
            if (curr != NULL) {
                st.push(curr);
                curr = curr->left;
            } else {
                TreeNode *peekNode = st.top();
                if (peekNode->right != NULL && lastVisited != peekNode->right) {
                    curr = peekNode->right;
                } else {
                    vec.push_back(peekNode->val);
                    lastVisited = peekNode;
                    st.pop(); 
                }
            }
        }

        return vec;
    }
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        if (!root) return {}; 
        stack<TreeNode*>st1;
        stack<TreeNode*>st2;
        vector<int>vec;
        TreeNode *node=root;
        st1.push(node);
        while(!st1.empty())
        {   
            node=st1.top();
            st1.pop();
            if(node->left!=NULL) st1.push(node->left);
            if(node->right!=NULL) st1.push(node->right);
            st2.push(node);  
        }
        while(!st2.empty())
        {
            vec.push_back(st2.top()->val);
            st2.pop();
        }
        return vec;
    }
};
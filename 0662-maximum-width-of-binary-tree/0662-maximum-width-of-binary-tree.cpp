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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int ans=0;
        queue<pair<TreeNode*,unsigned long long>>q;
        q.push({root,0});
        while(!q.empty())
        {
            int first=0,second=0;
            unsigned long long size=q.size();
            unsigned long long mmin=q.front().second;
            for(int i=0;i<size;i++)
            {
               unsigned long long curr_id=q.front().second-mmin;
                TreeNode* node=q.front().first;
                q.pop();
                if(i==0) first=curr_id;
                if(i==size-1) second=curr_id;
                if(node->left!=NULL) q.push({node->left,curr_id*2+1});
                if(node->right!=NULL) q.push({node->right,curr_id*2+2});

            }
            ans=max(ans,static_cast<int>(second-first+1));
        }  
        return ans; 
    }
};
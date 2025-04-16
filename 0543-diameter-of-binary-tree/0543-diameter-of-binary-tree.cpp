class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi = 0;
        dia(root, maxi);
        return maxi;
    }
private:
    int dia(TreeNode* node, int& maxi)
    {
        if (node == NULL) return 0;
        int lh = dia(node->left, maxi);
        int rh = dia(node->right, maxi);
        maxi = std::max(lh + rh, maxi);
        return std::max(lh, rh) + 1;
    }
};

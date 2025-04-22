/*
给你一棵二叉树的根节点 root ，翻转这棵二叉树，并返回其根节点。
https://leetcode.cn/problems/invert-binary-tree/description/?envType=problem-list-v2&envId=2cktkvj&

 //利用递归
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr) return nullptr;
        TreeNode* rightTree = root->right;
        root->right = invertTree(root->left);
        root->left = invertTree(rightTree);
        return root;
    }
};
*/
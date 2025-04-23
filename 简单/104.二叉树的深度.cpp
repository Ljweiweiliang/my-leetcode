/*
给定一个二叉树 root ，返回其最大深度。

二叉树的 最大深度 是指从根节点到最远叶子节点的最长路径上的节点数。

https://leetcode.cn/problems/maximum-depth-of-binary-tree/description/?envType=problem-list-v2&envId=2cktkvj


class Solution {
public:
    int maxDepth(TreeNode* root) {
        // if (root == nullptr) return 0;
        // return std::max(maxDepth(root->left),maxDepth(root->right))+1;

        return root==nullptr ? 0 :std::max(maxDepth(root->left),maxDepth(root->right))+1;
    }
};

*/
/*
给你一棵二叉树的根节点，返回该树的 直径 。
二叉树的 直径 是指树中任意两个节点之间最长路径的 长度 。这条路径可能经过也可能不经过根节点 root 。
两节点之间路径的 长度 由它们之间边数表示。
https://leetcode.cn/problems/diameter-of-binary-tree/description/?envType=problem-list-v2&envId=2cktkvj


class Solution {
public:
    int res = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        //依靠递归 来实现某种+1  找左右子节点中最长的长度
        fd(root);
        return res;
    }


    //定义一个函数来找左右子树最深
private:
    int fd(TreeNode* root)
    {
        int deepth=0;
        if(root == nullptr) return 0;
        int leftdeepth = fd(root->left);
        int rightdeepth = fd(root->right);
        deepth = std::max(leftdeepth,rightdeepth);
        res = std::max(res,leftdeepth+rightdeepth);
        return deepth+1;
    }
};


*/
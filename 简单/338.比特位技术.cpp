/*
给你一个整数 n ，对于 0 <= i <= n 中的每个 i ，
计算其二进制表示中 1 的个数 ，返回一个长度为 n + 1 的数组 ans 作为答案。
https://leetcode.cn/problems/counting-bits/description/?envType=problem-list-v2&envId=2cktkvj&

0 1 2 3 4 5 6 7 8
1的个数： 
0 1 1 2 1 2 2 3 1


class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n+1, 0); // 使用 vector 来存储结果，初始化为 0
        for (int i = 1; i <= n; ++i) {  // 从 1 开始到 n
            // 如果 i 是偶数，res[i] = res[i/2]
            // 如果 i 是奇数，res[i] = res[i/2] + 1
            res[i] = res[i / 2] + (i % 2);
        }
        return res;  // 返回 vector<int> 类型的 res
    }
};


*/
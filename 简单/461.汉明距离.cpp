/*
两个整数之间的 汉明距离 指的是这两个数字对应二进制位不同的位置的数目。

给你两个整数 x 和 y，计算并返回它们之间的汉明距离。
https://leetcode.cn/problems/hamming-distance/description/?envType=problem-list-v2&envId=2cktkvj&

8->1 0 0 0
1->0 0 0 1
从右往左比较 不同则+1
class Solution {
public:
    int hammingDistance(int x, int y) {
        int cnt=0;
        if(x == y) return 0;
        while(x!=0 || y!=0)
        {
            if(x%2 != y%2)
                cnt++;
                x/=2;
                y/=2;
        }
        return cnt;

    }
};

*/
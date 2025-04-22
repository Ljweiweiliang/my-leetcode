/*
给你一个 非空 整数数组 nums ，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。

你必须设计并实现线性时间复杂度的算法来解决此问题，且该算法只使用常量额外空间。
https://leetcode.cn/problems/single-number/description/?envType=problem-list-v2&envId=2cktkvj&


初始时，result = 0 nums = [4, 1, 2, 1, 2]
第一次循环，result = 0 ^ 4 = 4。
第二次循环，result = 4 ^ 1 = 5。
第三次循环，result = 5 ^ 2 = 7。
第四次循环，result = 7 ^ 1 = 6。
第五次循环，result = 6 ^ 2 = 4。

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //使用异或，出现两次的数字，先相加后减少，不改变result，最后保留的result为出现一次的数字
        int result = 0;
        for(int i =0;i<nums.size();++i)
        {
            result ^= nums[i];
        }
        result result;
    }
};
*/
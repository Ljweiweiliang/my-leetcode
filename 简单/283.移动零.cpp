/*
给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。

请注意 ，必须在不复制数组的情况下原地对数组进行操作。

https://leetcode.cn/problems/move-zeroes/description/?envType=problem-list-v2&envId=2cktkvj&




class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0;
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]!= 0)
            {
                swap(nums[slow++],nums[i]);
            }
        }
    }
};

*/
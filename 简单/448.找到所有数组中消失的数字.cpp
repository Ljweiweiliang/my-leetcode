/*
给你一个含 n 个整数的数组 nums ，其中 nums[i] 在区间 [1, n] 内。
请你找出所有在 [1, n] 范围内但没有出现在 nums 中的数字，并以数组的形式返回结果。

这题真的好难理解 最终不是很会
数是1-n  序列号是0-(n-1)

https://leetcode.cn/problems/find-all-numbers-disappeared-in-an-array/?envType=problem-list-v2&envId=2cktkvj&

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       for(int i=0; i<nums.size();++i)
       {
        nums[abs(nums[i])-1] = -abs(nums[abs(nums[i])-1]);
       }
       vector<int> res;
       for(int i=0;i<nums.size();++i)
       {
        if(nums[i]>0)
        {
            res.push_back(i+1);
        }
       }
       return res;
    }
};





*/
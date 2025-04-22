/*

给定一个大小为 n 的数组 nums ，返回其中的多数元素。多数元素是指在数组中出现次数 大于 ⌊ n/2 ⌋ 的元素。
你可以假设数组是非空的，并且给定的数组总是存在多数元素。
https://leetcode.cn/problems/majority-element/description/?envType=problem-list-v2&envId=2cktkvj&

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //找数量最多的数
        //排序后，中间的数一定是数量大于一半的数，复杂度超了？
        //摩尔投票，相同+1 不相同-1
        int num = nums[0];
        int cnt =1;
        for(int i=1;i<nums.size();++i)
        {
            if(nums[i]==num) {cnt++;}
            else {cnt--;}
            if(cnt == 0)
            {num = nums[i];
            cnt = 1;}
            
        }
        return num;
    }
};
*/
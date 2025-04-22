/*
给你两个单链表的头节点 headA 和 headB ，请你找出并返回两个单链表相交的起始节点。如果两个链表不存在相交节点，返回 null 。
https://leetcode.cn/problems/intersection-of-two-linked-lists/?envType=problem-list-v2&envId=2cktkvj&

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
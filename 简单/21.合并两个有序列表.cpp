/*
将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 
https://leetcode.cn/problems/merge-two-sorted-lists/description/?envType=problem-list-v2&envId=2cktkvj


  快慢指针？当前链表的指针a，跟另一个链表的指针b对比，a的下一个和b当前的对比。
  如果a的下一个大于b的当前，就让b当前所指加到列表中，b指针++，否则添加a，a++



    使用了递归
    
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       if(list1 == nullptr) return list2;
       if(list2 == nullptr) return list1;
       ListNode* list3 = new ListNode();
       if(list1->val < list2->val)
       {
        list3->val = list1->val;
        list3->next = mergeTwoLists(list1->next,list2);
       }
       else
       {
        list3->val = list2->val;
        list3->next = mergeTwoLists(list1,list2->next);
       }
       return list3;
    }
};

*/
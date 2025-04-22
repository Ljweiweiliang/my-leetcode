/*
给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。
https://leetcode.cn/problems/reverse-linked-list/description/?envType=problem-list-v2&envId=2cktkvj&


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr) return nullptr;
        ListNode* temp;
        ListNode* pre=nullptr;
        while(head)
        {
            temp = head->next;
            head->next = pre;
            pre = head;
            head = temp;
        }//执行完之后pre是头节点，如果返回的是head，那么head必为null
        return pre;
    }
};
*/
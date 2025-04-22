/*
给你一个单链表的头节点 head ，请你判断该链表是否为回文链表。如果是，返回 true ；否则，返回 false 。
https://leetcode.cn/problems/palindrome-linked-list/description/?envType=problem-list-v2&envId=2cktkvj&

 使用快慢指针找中点
 反转后半段，与前半段是否相等
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;
        //找后半段
        while(fast)
        {
            slow = slow->next;
            fast = fast->next?fast->next->next:fast->next;
        }
        //反转后半段链表
        while(slow)
        {
            ListNode* temp = slow->next;
            slow->next = prev;;
            prev = slow;
            slow = temp;
        }
        while(head && prev)
        {
            if(head->val != prev->val)
            {
                return false;
            }
            head = head->next;
            prev = prev->next;
        }
        return true;
    }
};
*/
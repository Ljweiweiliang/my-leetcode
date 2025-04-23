/*
给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。

有效字符串需满足：

左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。
每个右括号都有一个对应的相同类型的左括号。

https://leetcode.cn/problems/valid-parentheses/description/?envType=problem-list-v2&envId=2cktkvj

进栈出栈

class Solution {
public:
    bool isValid(string s) {
        //遇到左边就进栈，遇到右边就出栈，最后栈为空说明合理
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]== '[')
                st.push(s[i]);
            else
            {
                if(st.empty())  return false;
                if(s[i] ==')' && st.top() != '(') return false;
                if(s[i] =='}' && st.top() != '{') return false;
                if(s[i] ==']' && st.top() != '[') return false;
                st.pop();
            }
        }
        return st.empty();
    }
};

*/
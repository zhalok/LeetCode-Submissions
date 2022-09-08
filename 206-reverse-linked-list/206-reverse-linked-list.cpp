/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return head;
        stack<ListNode*> st;
        ListNode* cur = head;
        while(cur!=NULL)
        {
            st.push(cur);
            cur = cur->next;
        }
        ListNode* cur1 = new ListNode();
        ListNode* curHead = cur1;
        while(st.size())
        {
            cur1->val = st.top()->val;
            
            st.pop();
            if(st.size())
            {
                cur1->next = new ListNode();
                cur1 = cur1->next;
            }
        }
        return curHead;
    }
};


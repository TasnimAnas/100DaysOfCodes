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
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (!head)
            return NULL;
        ListNode *p = head;
        while (p->next)
        {
            if (p->val == p->next->val)
            {
                ListNode *t = p->next;
                p->next = p->next->next;
                delete t;
            }
            else
            {
                p = p->next;
            }
        }
        return head;
    }
};
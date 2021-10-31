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
    ListNode *removeElements(ListNode *head, int val)
    {
        if (!head)
            return NULL;
        while (head && head->val == val)
        {
            ListNode *t = head;
            head = head->next;
            delete t;
        }
        if (!head)
            return NULL;
        ListNode *p = head;
        ListNode *q = head;
        while (p)
        {
            if (val == p->val)
            {
                q->next = p->next;
                ListNode *t = p;
                p = p->next;
                delete t;
            }
            else
            {
                q = p;
                p = p->next;
            }
        }
        return head;
    }
};
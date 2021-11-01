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
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        if (!head || left == right)
            return head;

        left--;
        ListNode *a, *b, *x, *y;
        a = b = x = y = head;
        while (b && left)
        {
            a = b;
            b = b->next;
            x = y = b;
            left--;
            right--;
        }
        while (y && right)
        {
            x = y;
            y = y->next;
            right--;
        }
        x->next = NULL;
        ListNode *p, *q, *r;
        p = NULL;
        q = b;
        r = q->next;

        while (r)
        {
            q->next = p;
            p = q;
            q = r;
            r = r->next;
        }
        q->next = p;
        if (a == b)
        {
            head = q;
            b->next = y;
        }
        else
        {
            a->next = q;
            b->next = y;
        }

        return head;
    }
};
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
    ListNode *reverseList(ListNode *head)
    {
        if (!head)
            return NULL;

        ListNode *a, *b, *c;
        a = NULL;
        b = head;
        c = b->next;
        while (c)
        {
            b->next = a;
            a = b;
            b = c;
            c = c->next;
        }
        b->next = a;
        head = b;
        return head;
    }
};
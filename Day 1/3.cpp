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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        if (!l1)
            return l2;
        if (!l2)
            return l1;
        ListNode *l3 = NULL;
        ListNode *last = l3;
        if (l1->val < l2->val)
        {
            last = l3 = l1;
            l1 = l1->next;
            last->next = NULL;
        }
        else
        {
            last = l3 = l2;
            l2 = l2->next;
            last->next = NULL;
        }
        while (l1 && l2)
        {
            if (l1->val < l2->val)
            {
                last->next = l1;
                last = l1;
                l1 = l1->next;
                last->next = NULL;
            }
            else
            {
                last->next = l2;
                last = l2;
                l2 = l2->next;
                last->next = NULL;
            }
        }
        while (l1)
        {
            last->next = l1;
            last = l1;
            l1 = l1->next;
            last->next = NULL;
        }
        while (l2)
        {
            last->next = l2;
            last = l2;
            l2 = l2->next;
            last->next = NULL;
        }
        return l3;
    }
};
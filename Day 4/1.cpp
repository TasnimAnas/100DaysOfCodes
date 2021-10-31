/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        if (!head || !head->next)
            return false;
        ListNode *snode = head;
        ListNode *fnode = head->next;

        while (snode && fnode && (fnode->next))
        {
            if (snode == fnode)
                return true;
            snode = snode->next;
            fnode = fnode->next->next;
        }
        return false;
    }
};
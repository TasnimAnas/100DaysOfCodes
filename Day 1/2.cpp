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
    ListNode *sortList(ListNode *head)
    {
        if (!head)
            return head;

        auto arr = new vector<int>;
        while (head)
        {
            arr->push_back(head->val);
            ListNode *t = head;
            head = head->next;
            delete t;
        }
        sort(arr->begin(), arr->end());
        head = new ListNode;
        head->val = *(arr->begin());
        head->next = NULL;
        ListNode *last = head;
        for (int i = 1; i < arr->size(); i++)
        {
            ListNode *t = new ListNode;
            t->val = *(arr->begin() + i);
            t->next = NULL;
            last->next = t;
            last = t;
        }
        delete arr;
        return head;
    }
};
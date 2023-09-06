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
    ListNode* reverseBetween(ListNode *head, int m, int n) {
        ListNode **a = &head, **b;
        for (;m--; n--)
            a = &(*(b=a))->next;
        for (;n--; swap(*b, *a))
            swap(*b, (*a)->next);
        return head;
    }
};

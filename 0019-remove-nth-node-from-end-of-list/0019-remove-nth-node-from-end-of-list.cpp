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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *slow1=head;
        ListNode *slow2=head;
        for(int i=0; i<n; i++)
        {
            slow2 = slow2->next;
        }
        if(slow2 == NULL)
            return head->next;
        while(slow2->next != NULL)
        {
            slow1 = slow1->next;
            slow2 = slow2->next;
        }
        slow1->next = slow1->next->next;
        return head;
    }
};
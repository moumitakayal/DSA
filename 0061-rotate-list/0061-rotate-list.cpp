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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k==0)
            return head;
        ListNode* temp = head;
        ListNode* left = head;
        int n=1;
        while(temp->next != NULL)
        {
            n++;
            temp = temp->next;
        }
        temp->next = head;
        k = k%n; //if k is greater than length
        k = n - k;
        while(k>0)
        {
            temp = temp->next;
            k--;
        }
        head = temp->next;
        temp->next = NULL;
        return head;
    }
};
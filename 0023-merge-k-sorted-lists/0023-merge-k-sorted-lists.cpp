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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if(n == 0)
            return NULL;
        else if(n == 1)
            return lists[0];
        ListNode *merged = mergetwoLists(lists[0], lists[1]);
        for(int i=2; i<n; i++)
        {
            merged = mergetwoLists(merged, lists[i]);
        }
        return merged;
    }
    ListNode* mergetwoLists(ListNode* list1, ListNode* list2)
    {
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        while(list1 != NULL && list2 != NULL)
        {
            if(list1->val < list2->val)
            {
                temp->next = list1;
                temp = temp->next;
                list1 = list1->next;
            }
            else
            {
                temp->next = list2;
                temp=temp->next;
                list2= list2->next;
            }

        }
        if(list1 != NULL)
        {
            temp->next = list1;
        }
        if(list2 != NULL)
        {
            temp->next = list2;
        }
        return dummy->next;
    }
};
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* r=head;
        while(r)
        {
            while(r->next && r->next->val==val)
            {
                r->next=r->next->next;
            }
            r=r->next;
            
        }
        if(head)
        {
            if(head->val==val)
                head=head->next;
        }
        return head;
        
    }
};

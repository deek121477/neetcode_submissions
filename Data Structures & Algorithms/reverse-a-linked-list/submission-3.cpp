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
    ListNode* reverseList(ListNode* head) {
        if(!head)
     {
        return nullptr;
    }
        ListNode* temp=head;
        
        
//      0    1     2      3
//prev temp
//     head
        if(head->next)
        {
            temp=reverseList(head->next);
            head->next->next=head;
        }
        head->next=nullptr;
       
       return temp;
    }
};

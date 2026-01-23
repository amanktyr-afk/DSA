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
    ListNode* rotateRight(ListNode* head, int k) 
    {
        if(head==nullptr||head->next==nullptr)
        return head;
        ListNode *p=head;
        int count=1;
        while(p->next)
        {
            p=p->next;
            count++;
        }
         k=k%count;
        if(k==0||k==count)
        return head;
        ListNode *last=p,*prev=nullptr; 
        p=head;
        int step=count-k;
        while(step--)
        {  
            prev=p;
            p=p->next;
        }
        ListNode*newhead=p;
        last->next=head;
        prev->next=nullptr;
        return newhead;
    }
};
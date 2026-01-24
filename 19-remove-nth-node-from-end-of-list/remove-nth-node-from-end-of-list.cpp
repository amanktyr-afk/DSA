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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
       ListNode *p=head;
       int nodes=0;
       while(p)
       {
        p=p->next;
        nodes++;
       } 
       int steps=nodes-n;
       if(steps==0)
       {
        ListNode*first=head;
        head=head->next;
        delete first;
        return head;
       }
        p=head;
       ListNode*prev=nullptr;
       while(steps--)
       {
          prev=p;
          p=p->next;
       }
       prev->next=p->next;
       delete p;
       return head;
    }
};
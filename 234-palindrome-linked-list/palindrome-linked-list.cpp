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
//soln with no extra space
//check palindrom f(x)
bool palin(ListNode* h1, ListNode* h2)
{
    while(h1&&h2)
    {
        if(h1->val!=h2->val)
         return false;
         h1=h1->next;
         h2=h2->next;
    }
    return true;
}
//reverse f(x)
ListNode*reverse(ListNode* cur,ListNode* pre)
{  
    if(cur==nullptr)
    return pre;
    ListNode*fut=cur->next;
    cur->next=pre;
    return reverse(fut,cur);
}
    bool isPalindrome(ListNode* head) 
    {
      ListNode* temp=head;
       int count=0;
      while(temp)
       {
        count++;
         temp=temp->next;
       }
       count/=2;
       int step=count-1;
       if(step<0)
       return true; 
       temp=head;
       while(step--)
        temp=temp->next;
       ListNode*cur=temp->next;
       ListNode* head2 =reverse(cur,nullptr);
        return palin(head,head2); 
       }
    };
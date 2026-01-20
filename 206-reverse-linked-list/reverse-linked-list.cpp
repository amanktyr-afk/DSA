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
    ListNode* reverseList(ListNode* head) 
    {
        if(head==nullptr||head->next==nullptr)
        return head;
         ListNode*ptr=head;
         vector<int>v;
        while(ptr->next!=nullptr)
         {
           v.push_back(ptr->val);
           ptr=ptr->next;
         }
          v.push_back(ptr->val);
         int n=v.size();
         ptr=head;
         for(int i=n-1;i>=0;i--)
         {
            ptr->val=v[i];
            ptr=ptr->next;
         }
         return head;
    }
};
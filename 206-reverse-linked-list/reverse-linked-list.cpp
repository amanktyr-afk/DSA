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
        while(ptr!=nullptr)
         {
           v.push_back(ptr->val);
           ptr=ptr->next;
         }
         int i=v.size()-1;
         ptr=head;
         while(ptr)
         {
            ptr->val=v[i];
            i--;
            ptr=ptr->next;
         }
         return head;
    }
};
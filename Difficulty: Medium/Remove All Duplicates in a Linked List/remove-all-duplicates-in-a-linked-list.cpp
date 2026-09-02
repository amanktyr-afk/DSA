/* Structure of linked list Node
class Node {
public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/
class Solution {
  public:
    Node* removeDuplicates(Node* head) 
    {  
       if(head==nullptr || head->next==nullptr)
       return head;
       Node*dummy=new Node(444);
       dummy->next=head;
       Node*prev=dummy,*curr=head;
       while(curr)
       {
           if(curr->next && curr->data==curr->next->data)
           {
               int val=curr->data;
               while(curr && curr->data==val)
               {
                  curr=curr->next;
               }
               prev->next=curr;
           }
           else
           {
               prev=curr;
               curr=curr->next;
           }
       }
       return dummy->next;
    }
};
/* Node Structure
class Node {
  public:
    int data;
    Node* next;
    Node(int key) {
        data = key;
        next = nullptr;
    }
}; */

class Solution {
  public:
   Node*rev(Node*head)
   {
       Node*prev=nullptr;
       Node*curr=head;
       Node*nn=nullptr;;
       while(curr)
       {
           nn=curr->next;
           curr->next=prev;
           prev=curr;
           curr=nn;
       }
       return prev;
   }
    void rearrange(Node* head) 
    {
       Node*last=head;
       while(last->next)
       {
           last=last->next;
       }
       Node*ln=last;
       int n=1;
       Node*prev=nullptr;
       Node*curr=head;
       Node*nn=nullptr;
       while(curr!=ln)
       {
           nn=curr->next;
           if(n%2==0)
           {   
               Node*temp=nullptr;
               prev->next=nn;
               temp=curr;
               curr->next=nullptr;
               last->next=curr;
               last=last->next;
               prev=temp;
               curr=nn;
           }
           else
           {
           prev=curr;
           curr=nn;
           }
           n++;
       }
       ln->next=rev(ln->next);
    }
};
/*
class Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* rotate(Node* head, int k) 
    { 
        if(head==NULL || head->next==NULL|| k==0)
        return head;
      Node*h1=head,*last=head;
      while(last->next)
      {
          last=last->next;
      }
      Node*temp=NULL;
      while(k--)
      {   
          temp=h1->next;
          last->next=h1;
          last->next->next=NULL;
          h1=temp;
          last=last->next;
          
      }
      return temp;
    }
};
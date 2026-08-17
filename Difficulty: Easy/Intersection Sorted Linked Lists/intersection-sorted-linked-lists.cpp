/* Structure of a Linked list Node 
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
      Node *s1= head1, *s2= head2;
      Node * curr=NULL,*newhead=NULL;
      bool b=0;
      while(s1 != NULL && s2 != NULL)
      {
          if (s1->data < s2->data)
          {
             s1 = s1->next;
             
          }
          else if (s2->data < s1->data)
          {
              s2 = s2->next;
          }
          // just to remain unchange first node address of new list 
          else if(s2->data==s1->data && b==0)
          {
              newhead=new Node(s1->data);
              curr=newhead;
              s1 = s1->next;
              s2 = s2->next;
              b=1;
          }
          else if(s2->data==s1->data && b==1)
          {
              curr->next=new Node (s1->data);
              curr=curr->next;
              s1 = s1->next;
              s2 = s2->next;
          }
          else
          {
              
          }
      }
      return newhead;
    }
};
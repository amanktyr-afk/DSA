/* Structure of Doubly Linked List Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    Node* delPos(Node* head, int x) 
    { 
      if(head==NULL)
      return NULL;
      Node* curr=head;
      Node* post=NULL;
      int n=1;
      while(curr&&n!=x)
      {   
          post=curr;
          curr=curr->next;
          n++;
      }
      // first node del
      if(post==NULL)
     {
         head=head->next;
         if(head!=NULL)
         head->prev=NULL;
         delete curr;
         return head;
     }
     // last node del
      else if(curr->next==NULL)
      {
          post->next=NULL;
          delete curr;
          return head;
      }
      // nonedge node del
      else
      {
          curr->next->prev=curr->prev;
          curr->prev->next=curr->next;
          delete curr;
          return head;
      }
    }
};
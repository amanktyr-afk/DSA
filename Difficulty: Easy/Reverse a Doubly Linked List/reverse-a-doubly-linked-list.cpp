/* Structure of Doubly Linked List Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head)
    {
       if(head==NULL || head->next==NULL)
       return head;
       Node*curr=head,*last=NULL;
       while(curr!=NULL)
       {    
           Node* nextnode=curr->next;
           curr->prev=nextnode;
           curr->next=last;
           last=curr;
           curr=nextnode;
       }
       return last;
    }
};
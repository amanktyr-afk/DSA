
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    // soln with NO extra space
    Node* removeDuplicates(Node* head)
    {

      Node*curr=head->next;
      Node*prev=head;
      while(curr)
      {   
          if(!head)   // if #nodes can be 0, but here no need
          return head;

          if(curr->data==prev->data)
          {
              prev->next=curr->next;
              delete curr;
              curr=prev->next;
          }
          else
          {
              prev=curr;
              curr=curr->next;
          }

      }
      return head;
    }

};
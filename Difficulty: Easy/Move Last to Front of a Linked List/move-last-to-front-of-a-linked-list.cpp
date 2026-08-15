/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

*/
class Solution {
  public:
    Node *moveToFront(Node *head) 
    {
      if(head==NULL || head->next==NULL)
      return head;
      Node *end=head,*prev=NULL;
      while(end->next)
      {  
        prev=end;
        end=end->next;  
      }
      end->next=head;
      prev->next=NULL;
      return end;
    }
};
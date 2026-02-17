/*
class Node {
  public:
    int data;
    Node* next;
    Node* random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};
*/
// O(n)time & O(1)space soln
class Solution {
  public:
    Node* cloneLinkedList(Node* head)
    {
      Node* headcopy=new Node(0);//dummy node
      Node* tailcopy=headcopy;
      Node* temp=head;
      while(temp)
      {
          tailcopy->next=new Node(temp->data);
          tailcopy=tailcopy->next;
          temp=temp->next;
      }
      // deleting dummy node
      tailcopy=headcopy;
      headcopy=headcopy->next;
      delete tailcopy;
      Node* curr1=head,*curr2=headcopy;
      Node* fut1,*fut2;
      //linking copy nodes just next to real nodes
      while(curr1)
      {
        fut1=curr1->next;
        fut2=curr2->next;
        curr1->next=curr2;
        curr2->next=fut1;
        curr1=fut1;
        curr2=fut2;
      }
      //assigning random pointers
      curr1=head;
      while(curr1)
      {
        curr2=curr1->next;
        if(curr1->random)
        curr2->random=curr1->random->next;
        curr1=curr2->next; 
      }
      //seperating real and copy LLs
      curr1=head;
      while(curr1->next)
      {
          fut1=curr1->next;
          curr1->next=fut1->next;
          curr1=fut1;
      }
      return headcopy;
    }
};
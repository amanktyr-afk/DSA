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

class Solution {
  public:
    Node* find(Node* cur1,Node* cur2,Node* x)
    {  
        if(x==NULL)
        return NULL;
        while(cur1!=x)
        {
            cur1=cur1->next;
            cur2=cur2->next;
        }
        return cur2;
    }
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
      temp=head;
      tailcopy=headcopy;
      while(temp)
      {
         tailcopy->random=find(head,headcopy,temp->random);
         tailcopy=tailcopy->next;
         temp=temp->next;
         
      }
      return headcopy;
    }
};
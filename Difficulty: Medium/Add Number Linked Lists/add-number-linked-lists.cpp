/*
class Node {
  public:
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
    Node* reverse(Node* curr,Node* prev)
    { 
       if(curr==NULL)
       return prev;
       Node* fut=curr->next;
       curr->next=prev;
       return reverse(fut,curr);
    }
    Node* addTwoLists(Node* head1, Node* head2) 
    {
      head1=reverse(head1,NULL);
      head2=reverse(head2,NULL);
      int carray=0;
      Node* head=new Node(0);
      Node* tail=head;
      while(head1 && head2)
      {
         int sum=head1->data+head2->data+carray;
         tail->next=new Node(sum%10);
         tail=tail->next;
         carray=sum/10;
         head1=head1->next;
         head2=head2->next;
      }
       while(head1)
      {
         int sum=head1->data+carray;
         tail->next=new Node(sum%10);
         tail=tail->next;
         carray=sum/10;
         head1=head1->next;
      }
       while(head2)
      {
         int sum=head2->data+carray;
         tail->next=new Node(sum%10);
         tail=tail->next;
         carray=sum/10;
         head2=head2->next;
      }
      while(carray)
      {
          tail->next=new Node(carray%10);
          carray/=10;
      }
      head=reverse(head->next,NULL);
      while(head->data==0)
      head=head->next;
      return head;
    }
};
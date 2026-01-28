/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) 
    {     Node *temp=NULL;
           if(head1->data>=head2->data)
            {
                temp=new Node(head2->data);
                head2=head2->next;
            }
            else
            {
                temp=new Node(head1->data);
                head1=head1->next;
            }
           Node* head=temp;
            while(head1&&head2)
            {
              if(head1->data>=head2->data)
              {
                temp->next=new Node(head2->data);
                head2=head2->next;
                temp=temp->next;
               }
              else
              {
                temp->next=new Node(head1->data);
                head1=head1->next;
                 temp=temp->next;
               }
            }
            while(head1)
            {
                temp->next=new Node(head1->data);
                head1=head1->next;
                 temp=temp->next;
            }
            while(head2)
            {
                temp->next=new Node(head2->data);
                head2=head2->next;
                 temp=temp->next;
            }
            temp->next=NULL;
            return head;
    }
};
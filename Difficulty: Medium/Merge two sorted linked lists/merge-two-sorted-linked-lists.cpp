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
    {    
        Node *temp=new Node(5);// adding a dummy node for writting short code  
           Node* head=temp;  //by 1 if-else we have stored the address that is going to be returned   
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
            // inserting remaing L1 list
            while(head1)
            {
                temp->next=new Node(head1->data);
                head1=head1->next;
                 temp=temp->next;
            }
             // inserting remaing L2 list
            while(head2)
            {
                temp->next=new Node(head2->data);
                head2=head2->next;
                 temp=temp->next;
            }
            temp->next=NULL;
            return head->next;// Dummy->next that is real list
    }
};
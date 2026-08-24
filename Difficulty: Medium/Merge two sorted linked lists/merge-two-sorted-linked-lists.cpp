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
  // solution with no extra space(node creation)
    Node* sortedMerge(Node* head1, Node* head2) 
    {    
        Node *head=new Node(5);// adding a dummy node for writting short code  
           Node* tail=head;  //by 1 if-else we have stored the address that is going to be returned   
            while(head1&&head2)
            {
              if(head1->data>=head2->data)
              {
                tail->next=head2;
                head2=head2->next;
                tail=tail->next;
               }
              else
              {
                tail->next=head1;
                head1=head1->next;
                tail=tail->next;
               }
            }
            // linking remaing L1 list
            if(head1)
             tail->next=head1;
             // linking remaing L2 list
            if(head2)
            tail->next=head2;
        
            tail=head;
            head= head->next;// Dummy->next that is real list
             delete tail;    // removing that dummy node
             return head;
    }
};
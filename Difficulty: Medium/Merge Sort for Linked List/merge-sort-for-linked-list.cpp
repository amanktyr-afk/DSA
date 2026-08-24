/* Structure of linked list Node
class Node {
public:
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = nullptr;
    }
};*/
class Solution {
  public:
    Node* merge(Node*head1,Node*head2)
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
              tail->next=NULL;
             }
            else
            {
              tail->next=head1;
              head1=head1->next;
              tail=tail->next;
              tail->next=NULL;
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
    Node* mergeSort(Node* head) 
    { 
      if(head==NULL || head->next==NULL)
      return head;
      Node *last=head;
      int n=0;
      while(last)
      {
          n++;
          last=last->next;
      }
      Node* l1end=head;
      int mid=n/2;
      int i=mid;
      while(--i)
      {
         l1end=l1end->next; 
      }
      Node*l2start=l1end->next;
      l1end->next=NULL;
      //sort both halves
      head=mergeSort(head);
      l2start=mergeSort(l2start);
      //merge
       return merge(head,l2start);
    }
};
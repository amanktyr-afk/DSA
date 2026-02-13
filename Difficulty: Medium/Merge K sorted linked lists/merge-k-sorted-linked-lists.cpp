/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
  Node* merge(Node*head1,Node*head2)
   {
      Node*temp=new Node(0);
      Node* tail=temp;
      while(head1&&head2)
      {
        if(head1->data<head2->data)
        {
            tail->next=head1;
            head1=head1->next;
            tail=tail->next;
            tail->next=NULL;
        }
        else
        {
            tail->next=head2;
            head2=head2->next;
            tail=tail->next;
            tail->next=NULL; 
        }
      }
        if(head1)
        tail->next=head1;
        else
        tail->next=head2;
        return temp->next;
   }
    Node* mergeKLists(vector<Node*>& arr) 
    {
      int k=arr.size();
      Node* head=arr[0];
      for(int i=1;i<k;i++)
      {
          head=merge(head,arr[i]);
      }
      return head;
    }
};
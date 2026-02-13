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
    Node *reverseKGroup(Node *head, int k) 
    {
     Node*first=new Node(0);
     first->next=head;
     head=first;
     while(first->next)
     {  
        int value=k;
         Node* prev=first;
         Node* curr=first->next;
         Node* sec=first->next;
        while(value&&curr)
        {
          Node* fut=curr->next;
          curr->next=prev;
          prev=curr;
          curr=fut;
          value--;
        }
        first->next=prev;
        sec->next=curr;
        first=sec;
     }
     first=head;
     head=head->next;
     delete first;
     return head;
    }
};
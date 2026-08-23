/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = nullptr;
    }
};*/

class Solution {
  public:
    Node *reverse(Node*h2)
    {  
        Node*curr=h2;
        Node*prev=NULL;
        Node*nn=NULL;
        while(curr)
        {
           nn=curr->next;
           curr->next=prev;
           prev=curr;
           curr=nn;
        }
        return prev;
    }
    bool isPalindrome(Node *head) 
    {   
        if(head->next==NULL)
        return 1;
        Node *h1=head,*h2=head;
        int n=0;
        while(h1!=NULL)
        {
          n++;
          h1=h1->next;
        }
        n=n/2;
        h1=head;
        Node*prev=NULL;
        while(n--)
        {   
            prev=h2;
            h2=h2->next;
        }
        prev->next=NULL;
        Node *revh2=reverse(h2);
        while(h1 && revh2)
        {
            if(h1->data!=revh2->data)
            return 0;
            h1=h1->next;
            revh2=revh2->next;
        }
        return 1;
    }
};
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) 
    {
       if(head==NULL) // head->next==NULL can't add here becz may first node has chind so we have to faltten it not return  
       return head;
       Node* curr=head;
       Node* cnn=NULL;
       Node*childLL=NULL;
       Node*childtemp=NULL;
       while(curr)
       {
        if(curr->child)
        {
           childLL=curr->child;
           childtemp=curr->child;
           cnn=curr->next;
           while(childLL->next)
           {
             childLL=childLL->next;
           }
           childLL->next=cnn;
           if(cnn)    // if last node has child then cnn will be NULL so NULL->next is fault
           cnn->prev=childLL;
           curr->next=childtemp;
           childtemp->prev=curr;
           // now that curr  node is flatten so curr->child =NULL now 
           curr->child=NULL;
        }
            curr=curr->next;
       }
       return head;
    }
};
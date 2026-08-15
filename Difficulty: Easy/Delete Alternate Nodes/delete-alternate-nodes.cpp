/* Structure of Linked List Node
class Node
{
    int data;
    Node *next;

    Node(int x){
        int data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    void deleteAlt(Node *head) 
    {  
      Node*prev=NULL,*curr=head;
      int n=1;
      while(curr)
      {   
         Node* nextnode=curr->next;
          if(n%2==0)
          {
              prev->next=nextnode;
              delete curr;
              curr=nextnode;
          }
          else
          {
            prev=curr;
            curr=nextnode;
          }
          n++;
      }
    }
};
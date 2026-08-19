/* The structure of linked list Node
struct Node
{
  int data;
  struct Node *next;

  Node(int x){
      data = x;
      next = nullptr;
  }
};
*/

class Solution {
  public:
    pair<Node *, Node *> splitList(struct Node *head)
    {   
        Node *h1=head,*h2=head->next;
        int len=1;
        while(h2!=h1)
        {
            len++;
            h2=h2->next;
        }
        Node *curr1=h1;
        int l1=(len+1)/2;
        int l2=len-l1;
        while(--l1)
        {
            curr1=curr1->next;
        }
        h2=curr1->next;
        curr1->next=h1;
        Node *curr2=h2;
        while(--l2)
        {
            curr2=curr2->next;
        }
        curr2->next=h2;
         
         return {h1,h2};
    }
};
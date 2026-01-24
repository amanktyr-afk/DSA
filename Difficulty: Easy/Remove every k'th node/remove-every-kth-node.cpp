/* Link list Node

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

/*You are required to complete this method*/

/* Function to get the middle of the linked list*/
/*K will always be in range */
class Solution {
  public:
    Node* deleteK(Node* head, int k)
    {
       Node *pre=NULL,*curr=head;
       int count=0;
       if(k==1)
       return NULL;
       while(curr)
       {     
           count++;
           if(count%k)
           {   
                pre=curr;
               curr=curr->next;
           }
           else
           {
             pre->next=curr->next;
             delete curr;
             curr=pre->next;
           }
       }
       return head;
    }
};
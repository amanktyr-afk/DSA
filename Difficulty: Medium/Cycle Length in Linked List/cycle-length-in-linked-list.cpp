/* Structure of Linked List Node
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
    int lengthOfLoop(Node *head)
    {  
       int len=0;
       Node*slow=head,*fast=head;
       while(fast!=NULL && fast->next!=NULL)
       {
           slow=slow->next;
           fast=fast->next->next;
           if(slow==fast)
           {
              break;
           }
       }
       if(fast==NULL || fast->next==NULL)
       return len;
       else
       {
        Node*loopnode=slow->next;
        while(loopnode!=slow)
        {
            loopnode=loopnode->next;
            len++;
        }
         return len+1;
       }
    }
};
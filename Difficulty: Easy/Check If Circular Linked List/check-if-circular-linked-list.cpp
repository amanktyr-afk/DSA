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
class Solution {
  public:
    bool isCircular(Node *head) 
    {
      Node*temp=head;
      if(temp==NULL)
      return 1;
      while(temp->next!=NULL && temp->next!=head)
      {
          temp=temp->next;
      }
      if(temp->next==head)
      return 1;
      else
      return 0;
    }
};
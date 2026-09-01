/* Node Structure
class Node {
  public:
    int data;
    Node* next;
    Node* prev;
    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
}; */

class Solution {
  public:
    Node*partition(Node*head,Node*tail)
    {
        int pivot = tail->data;

        Node* pos = head;
        Node* curr = head;
        while(curr != tail)
        {
            if(curr->data <= pivot)
            {
                swap(pos->data, curr->data);
                pos = pos->next;
            }

            curr = curr->next;
        }
          swap(pos->data, tail->data);//pos will point the position of pivot ele at last
              return pos;
    }
    void quick(Node*head,Node*tail)
    { 
      if(head==NULL || head==tail)
      return;
      Node*pivot=partition(head,tail);
      //left part
      if(pivot!=head)
      {
       quick(head,pivot->prev);
      }
      //rightpart
      if(pivot!=tail)
      {
      quick(pivot->next,tail);
      }
    }
    Node* quickSort(Node* head)
    {  
       if(head==NULL || head->next==NULL)
       return head;
       Node*tail=head;
       
       while(tail->next)
       tail=tail->next;
       
       quick(head,tail);
       return head;
    }
};

/* Structure of linked list Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/
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
    void quickSortUtil(Node* head, Node* tail)
    {
       if(head == NULL || head == tail)
       return;
       Node* pivot = partition(head, tail);
       
       // sort left part
       if (head!=pivot)
       {
          Node* temp = head;
          while(temp->next != pivot)
          temp = temp->next;
          quickSortUtil(head, temp);
       }
       
       //sort right part
       if(pivot != tail)
       {
           quickSortUtil(pivot->next, tail);
       }
    }
    Node* quickSort(Node* head) 
    {  
        if(head == NULL || head->next == NULL)
        return head;
        Node* tail = head;

        while(tail->next)
        tail = tail->next;
        
        quickSortUtil(head, tail);
        return head;
    }
};
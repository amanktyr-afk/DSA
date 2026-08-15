/* Structure of a Linked List Node
class Node
{
public:
    int data;
    struct Node *next;
    Node(int x){
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int fractionalNode(Node *head, int k) 
    {   
        
        Node* start=head,*end=head;
         float len=0;
         while(end)
        {
            end=end->next;
            len++;
        }
        int kth=ceil(len/k);
        while(--kth)
        {
            start=start->next;
        }
        return start->data;
    }
};
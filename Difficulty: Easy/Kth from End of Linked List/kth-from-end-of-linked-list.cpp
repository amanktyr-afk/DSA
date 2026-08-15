/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int getKthFromLast(Node* head, int k) 
    {   
        Node*start=head,*end=head;
        int len=0;
        while(end)
        {
            end=end->next;
            len++;
        }
        if(k>len)
        return -1;
        int fk=len-k+1;
        while(--fk)
        {
           start=start->next;
        }
        return start->data;
    }
};
/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) 
    {  
        Node*start=head,*end=head;
        float len=0;
        while(end)
        {
            end=end->next;
            len++;
        }
        int k=ceil((len+1)/2);
        while(--k)
        {
            start=start->next;
        }
        return start->data;
    }
};
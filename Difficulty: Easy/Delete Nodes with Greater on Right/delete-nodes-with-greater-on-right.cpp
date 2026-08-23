/* Structure of a Linked List node
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
public:

    Node* reverse(Node* head)
    {
        Node* prev = NULL;
        Node* curr = head;

        while (curr)
        {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    Node* compute(Node* head)
    {
        if (head == NULL || head->next == NULL)
            return head;

        // Reverse the list
        head = reverse(head);

        Node* curr = head;
        int mx = curr->data;

        while (curr && curr->next)
        {
            if (curr->next->data < mx)
            {
                // Delete next node
                Node* temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
            }
            else
            {
                curr = curr->next;
                mx = curr->data;
            }
        }

        // Reverse back
        head = reverse(head);

        return head;
    }
};
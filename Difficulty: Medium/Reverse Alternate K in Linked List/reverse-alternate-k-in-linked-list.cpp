/* Linked List Node Structure
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/

class Solution {
public:
    Node* kAltReverse(Node* h, int k) {
        if (h == NULL || k <= 1)
            return h;

        Node* curr = h;
        Node* prev = NULL;
        Node* next = NULL;

        int count = 0;

        // Reverse first k nodes
        while (curr && count < k) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        // h is now the last node of reversed group
        h->next = curr;

        // Skip next k nodes
        count = 0;
        Node* temp = curr;

        while (temp && count < k) {
            h = temp;
            temp = temp->next;
            count++;
        }

        // Recursively process remaining nodes
        if (temp)
            h->next = kAltReverse(temp, k);

        return prev;
    }
};
/* Structure of a linked list node
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

    int cs(Node* a, Node* b) {
        int cnt = 0;

        while (a && b && a->data == b->data) {
            cnt++;
            a = a->next;
            b = b->next;
        }

        return cnt;
    }

    int maxPalindrome(Node *head) {

        if (head == NULL)
            return 0;

        if (head->next == NULL)
            return 1;

        Node *revhead = NULL;
        Node *nx = NULL;

        int ans = 1;

        while (head) {

            nx = head->next;

            // Reverse the left part
            head->next = revhead;
            revhead = head;
            head = nx;

            // Even length palindrome
            ans = max(ans, cs(revhead, head) * 2);

            // Odd length palindrome
            if (head) {
                ans = max(ans, cs(revhead->next, head) * 2 + 1);
            }
        }

        return ans;
    }
};
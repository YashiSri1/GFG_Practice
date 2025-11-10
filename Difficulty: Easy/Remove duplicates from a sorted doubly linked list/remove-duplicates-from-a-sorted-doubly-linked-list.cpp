/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/

class Solution {
  public:

    Node *removeDuplicates(struct Node *head) {
        // Your code here
        Node* temp = head->next;
        while (temp != nullptr) {
            if (temp->prev->data == temp->data) {
                temp->prev->next = temp->next;
                if (temp->next != nullptr) {
                    temp->next->prev = temp->prev;
                }
                Node* toDelete = temp;
                temp = temp->next;
                delete toDelete; // optional: free memory
            } else {
                temp = temp->next;
            }
        }
        return head;
    }
};
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
        Node* temp=head;
        while(temp!=NULL && temp->next!=NULL){
            Node* newnode=temp->next;
            while(newnode!=NULL && newnode->data==temp->data){
                newnode=newnode->next;
            }
            temp->next=newnode;
            if(newnode) newnode->prev = temp;
            temp=temp->next;
        }
        return head;
    }
};
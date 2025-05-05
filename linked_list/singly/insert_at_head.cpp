#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int value;
        Node *next;
        Node(int value)
        {
            this->value = value;
            this->next = NULL;
        }
};

void insert_at_head(Node* &head, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head; //linking the new_head to actual head
    head = new_node; //head is now updated
}

void print_list(Node* head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main() {
    Node *head = new Node(13);
    Node *a = new Node(14);
    Node *b = new Node(15);

    head->next = a;
    a->next = b;

    insert_at_head(head, 120);
    insert_at_head(head, 110);
    insert_at_head(head, 100);
    
    print_list(head);

    return 0;
}
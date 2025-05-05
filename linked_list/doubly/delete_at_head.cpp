#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int value;
        Node *next;
        Node *prev;
        Node(int value)
        {
            this->value = value;
            this->next = NULL;
            this->prev  = NULL;
        }
};

void print_forward(Node * head)
{
    Node * temp = head;
    while(temp != NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void print_backward(Node * tail)
{
    Node * temp = tail;
    while(temp != NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}

void delete_at_head(Node* &head, Node* &tail)
{
    Node *delete_node = head;
    head = head->next;
    delete delete_node;
    //corner case
    if (head = NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}

int main() {
    Node *head = new Node(24);
    Node *a = new Node(25);
    Node *b = new Node(26);
    Node *tail = new Node(27);

    head->next = a;

    a->prev = head;
    a->next = b;

    b->prev = a;
    b->next = tail;

    tail->prev = b;

    print_forward(head);
    delete_at_head(head, tail);
    delete_at_head(head, tail);
    print_forward(head);
    print_backward(tail);
    return 0;
}
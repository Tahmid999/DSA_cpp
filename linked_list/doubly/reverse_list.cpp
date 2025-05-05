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

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    
    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;
}

void reverse_list(Node *head, Node *tail)
{
    for (Node * i = head, *j = tail; i != j && j != i->prev; i =i->next, j = j->prev)
    {
        swap(i->value, j->value);
    }
    
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;

    int x;
    while (true)
    {
        cin>>x;
        if (x==-1)
        {
            break;
        }
        insert_at_tail(head, tail, x);
    }
    
    print_forward(head);
    reverse_list(head, tail);
    print_forward(head);
    
    return 0;
}
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

void insert_at_any_pos(Node* &head, int val, int idx)
{
    Node *temp = head;
    Node *new_node = new Node(val);
    // if (head = NULL)
    // {
    //     head = new_node;
    //     tail = new_node;
    //     return;
    // }
    

    for (int i = 0; i < idx-1; i++)
    {
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next->prev = new_node;
    temp->next = new_node;
    new_node->prev = temp;
    
}

int size_list(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
    
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

    int size = size_list(head);
    print_forward(head);
    insert_at_any_pos(head, 23, 1);
    print_forward(head);
    print_backward(tail);
    return 0;
}

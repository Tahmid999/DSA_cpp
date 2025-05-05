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

void insert_at_any_pos(Node* &head, int index, int val)
{
    Node *new_node = new Node(val);
    Node *temp = head;
    for (int i = 0; i < index-1; i++)
    {
        temp = temp->next;
    }
    new_node->next = temp->next; //first of all connect/link the tail
    temp->next = new_node; //now creat link of new node at user index
    
}

void print_list(Node *head)
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
    Node *head = new Node(18);
    Node *a = new Node(19);
    Node *b = new Node(20);

    head->next = a;
    a->next = b;

    insert_at_any_pos(head, 2, 130);
    insert_at_any_pos(head, 2, 120);

    print_list(head);

    return 0;
}
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

void insert_at_tail(Node* &head, int val)
{
    Node *new_node = new Node(val);

    //corner case if head is NULL or list not have any value
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    
    Node *temp = head;
    while (temp->next != NULL) 
    {
        temp = temp->next;
    }
    temp->next = new_node;
    
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
    
    // Node *head = NULL;

    Node *head = new Node(15);
    Node *a = new Node(16);
    Node *b = new Node(17);

    head->next = a;
    a->next = b;

    insert_at_tail(head, 18);
    insert_at_tail(head, 19);
    insert_at_tail(head, 20);

    print_list(head);

    return 0;
}
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

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node *new_node = new Node(val);

    //corner case if head is NULL or list not have any value
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    //linking new tail to the new_node
    tail->next = new_node;
    tail = new_node; // tail = tail->next;
    
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

void delete_at_any_pos(Node* &head, int index)
{
    Node *temp = head;
    for (int i = 0; i < index-1; i++)
    {
        temp = temp->next;
    }
    Node *delete_node = temp->next;
    temp->next = temp->next->next;
    delete delete_node;
}

int main() {
    
    Node* head = NULL;
    Node* tail = NULL;

    while(true)
    {
        int x;
        cin>>x;
        if (x == -1)
        {
            break;
        }
        insert_at_tail(head, tail, x);
    }
    delete_at_any_pos(head, 2);
    
    print_list(head);

    return 0;
}

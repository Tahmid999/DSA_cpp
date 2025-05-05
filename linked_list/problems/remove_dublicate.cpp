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
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    tail = new_node;
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

void delete_at_any(Node* head, int idx)
{
    Node* temp = head;
    for (int i = 0; i < idx-1; i++)
    {
        temp = temp->next;
    }
    Node *delete_node = temp->next;
    temp->next = temp->next->next;
    delete delete_node;
}

int size_list(Node* head)
{
    Node* temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void remove_double(Node * head, int size)
{
    int i =0;
    int j =0;
    Node *temp = head;
    for ( int i =0; i<size; i++)
    {
        
        Node *temp2 = head;
        for (int j = 0; j < size; j++)
        {
            if (temp->value == temp2->value)
            {
                delete_at_any(head, j);
                cout<<j<<endl;
                temp2 = temp2->next;
                continue;
            }
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
     
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;

    int x;
    while(cin>>x)
    {
        if (x == -1)
        {
            break;
        }
        insert_at_tail(head, tail, x);

    }
    int size = size_list(head);
    cout<<"before remove: ";
    print_list(head);
    remove_double(head, size);
    cout<<"after remove: ";
    print_list(head);

    return 0;
}
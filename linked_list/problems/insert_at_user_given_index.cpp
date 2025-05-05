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

void insert_at_head(Node* &head, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
    
}

void insert_at_any(Node* &head, int index, int val)
{
    Node *new_node = new Node(val);
    Node* temp = head;
    for (auto i = 0; i < index-1; i++)
    {
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;

}

int size(Node* temp)
{
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void print_list(Node* temp)
{
    while (temp != NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;

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

    
    int pos, val;
    while (cin >> pos >> val)
    {
        
        int size_1 = size(head);
        if (pos > size_1 || pos < 0)
        {
            cout<<"Invalid"<<endl;
        }
        else if (pos == 0)
        {
            insert_at_head(head, val);
            print_list(head);
        }
        else if (pos == size_1)
        {
            insert_at_tail(head, tail, val);
            print_list(head);
        }
        else
        {
            insert_at_any(head, pos, val);
            print_list(head);
        }
         
    }
    

    return 0;
}
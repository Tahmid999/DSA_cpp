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

int size_list(Node* temp)
{
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void search_val(Node *temp, int size, int val)
{
    
    for (int i = 0; i < size; i++)
    {
        if (temp->value == val)
        {
            cout<<i<<endl;
            return;
        }
        temp = temp->next;
    }
    
    cout<<"-1"<<endl;
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
    int size = size_list(head);
    search_val(head, size, 7);

    return 0;
}
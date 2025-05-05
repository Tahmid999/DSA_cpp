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
    Node* new_node = new Node(val);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    tail = new_node;
}

int size_of_list(Node* temp)
{
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    
    return count;
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
    int size = size_of_list(head);
    cout<<size<<endl;

    
    if (size%2==0)
    {
        Node *temp = head;
        for (int i = 0; i < (size/2)-1; i++)
        {
            temp = temp->next;
        }
        cout<<temp->value<<" "<<temp->next->value<<endl;
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < (size/2); i++)
        {
            temp = temp->next;
        }
        cout<<temp->value<<endl;
    }
    
    

    return 0;
}
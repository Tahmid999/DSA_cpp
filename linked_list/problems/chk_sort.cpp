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

    Node *temp1 = head;

    bool chk = true;
    
    while (temp1->next != NULL)
    {
        if (temp1->value > temp1->next->value)
        {
            chk = false;
            break;
        }
        temp1 = temp1->next;
    }

    if (chk == false)
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
    }    
    
    
    return 0;
}
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

int main() {
    
    

    Node *head = new Node(15);
    Node *b = new Node(16);
    Node *c = new Node(17);
    Node *d = new Node(18);
    Node *e = new Node(19);
    Node *tail = new Node(20);

    head->next = b;
    b->next = c;
    c->next = d;
    d->next = b;
    e->next = tail;

    Node *slow = head;
    Node *fast = head;
    bool flag = false;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            flag = true;
            break;
        }
    }
    
    if (flag == true)
    {
        cout<<"Cycle Detected";
    }
    else
        cout<<"No Cycle";

    return 0;
}
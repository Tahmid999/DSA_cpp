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

int main() {
    Node *head = new Node(16);
    Node *a = new Node(17);
    Node *b = new Node(18);
    Node *c = new Node(19);
    Node *d = new Node(20);

    //make link
    head->next = a;
    a->next = b;
    b->next = c;
    c->next =d;

    //traditional printing :`)
    // cout<<head->value<<" ";
    // cout<<head->next->value<<" ";
    // cout<<head->next->next->value<<" ";
    // cout<<head->next->next->next->value<<" ";
    // cout<<head->next->next->next->next->value;

    //updating head pointer it's prohabited because 
    //head is my primary pointer to access the list
    //instead of updaing head we can assign a temp variable and point it to head
    //so that head primary pointer be safe and access the list any time by temp pointer

    // while (head != NULL)
    // {
    //     cout<<head->value<<" ";
    //     head = head->next;
    // }

    Node *temp = head;

    while (temp != NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;

    //again re-point the temp from NULL to head
    temp = head;
    while (temp != NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int value;
        Node *next;
        Node *prev;
        Node(int value)
        {
            this->value = value;
            this->next = NULL;
            this->prev = NULL;
        }
};

int main() {
    Node *head = new Node(24);
    Node *a = new Node(25);
    Node *b = new Node(26);
    Node *tail = new Node(27);

    //linking 
    head->next = a;

    a->prev = head;
    a->next = b;

    b->prev = a;
    b->next = tail;

    tail->prev = b;

    cout<<"value of b: "<<head->next->next->value<<endl;
    cout<<"value of a: "<<tail->prev->prev->value; // or b->prev->value;

    return 0;
}
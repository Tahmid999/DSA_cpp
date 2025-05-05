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
    //dynamic initialize
    Node *head = new Node(13);
    Node *a = new Node(14);
    Node *b = new Node(15);

    //make link
    // (*head).next = a;
    head->next = a;
    a->next = b;

    cout<<head->value<<" "<<head->next->value<<" "<<head->next->next->value<<endl;

    return 0;
}
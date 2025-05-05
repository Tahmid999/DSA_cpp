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

void chk_same(Node *temp1, Node* temp2, int size1, int size2)
{
    
    if (size1 != size2)
    {
        cout<<"No"<<endl;
        return;
    }
    else
    {
        for (int i =0; i<size1; i++)
        {
            if (temp1->value != temp2->value)
            {
                cout<<"No"<<endl;
                return;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }

    cout<<"Yes"<<endl;
    
}

int main() {
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    while(true)
    {
        int x;
        cin>>x;
        if (x == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, x);
    }

    while(true)
    {
        int x;
        cin>>x;
        if (x == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, x);
    }

    int size1 = size_list(head1);
    int size2 = size_list(head2);

    chk_same(head1, head2, size1, size2);

    return 0;
}
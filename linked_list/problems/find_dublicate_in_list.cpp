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

    int mask[101] = {0};
    Node* temp = head;
    
    int size_1 =size(head);
    int size_2 = sizeof(mask)/sizeof(mask[0]);

    //counting the frequency
    for (int i = 0; i < size_1; i++)
    {
        // if (mask[temp->value] == 1 || mask[temp->value] > 1)
        // {
        //     mask[temp->value]++;
        //     temp = temp->next;
        //     continue;
        // }
        // mask[temp->value] = 1; 
        ++mask[temp->value]; 
        temp = temp->next;
    }

    
    bool chk = false;
    for (int i = 0; i < size_2; i++)
    {
        if (mask[i] > 1)
        {
            chk = true;
            break;
        }
    }
    
    if (chk == true)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    
    
    

    return 0;
}
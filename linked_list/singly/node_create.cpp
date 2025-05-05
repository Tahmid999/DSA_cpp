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
            this->next = NULL; //by default after last value next will null
        }
};

int main() {
    Node a(40),b(50),c(100);

    //without constructor;
    // a.value = 40;
    // b.value = 50;
    // c.value = 60;

    // cout<<a.value<< " "<< b.value <<" "<<c.value<<endl;

    //make link
    a.next = &b;
    b.next = &c;
    //c.next = NULL; //no need to assign null cause in constructor after every object it will NULL

    //access the value with pointer (not looking good)
    cout<<a.value<<" "<<(*a.next).value<<" "<<(*(*a.next).next).value<<endl;

    //access the value with this -> mathod (more efficient and looking good)
    //we can access value by loop
    cout<<a.value<<" "<<a.next->value<<" "<<a.next->next->value<<endl;

    return 0;
}
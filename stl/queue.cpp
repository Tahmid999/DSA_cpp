#include<bits/stdc++.h>
using namespace std;

int main() {

    //stack is first in first out or we can say last in last out
    // inverse or stack
    queue<string> q;

    q.push("Tahmid");
    q.push("Rahman");
    q.push("Muhtadee");

    cout<<"first part of q is: "<<q.front()<<endl;
    cout<<"last part of q is: "<<q.back()<<endl;

    q.pop();

    cout<<"after pop now first part of q is: "<<q.front()<<endl;

    cout<<"size of q is: "<<q.size()<<endl;

    return 0;
}
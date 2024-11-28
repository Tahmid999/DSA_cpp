#include<bits/stdc++.h>
using namespace std;

int main() {

    //stack is first in last out or we can say last in first out
    stack<string> s;

    s.push("Tahmid");
    s.push("Rahman");
    s.push("Muhtadee");

    cout<<"top of s is: "<<s.top()<<endl;

    s.pop();

    cout<<"after pop now top of s is: "<<s.top()<<endl;

    cout<<"size of s is: "<<s.size()<<endl;

    return 0;
}
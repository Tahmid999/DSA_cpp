#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> l;

    l.push_back(5);
    l.push_front(2);

    // at function not work in list, if i have to find a 
    // pirticular position element the i have to travel the full list
    // cout<<l.at(1); 

    for (int i : l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // l.pop_front();

    // for (int i : l)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    l.erase(l.begin());
    for (int i : l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}
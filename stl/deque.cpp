#include<bits/stdc++.h>
using namespace std;

int main() {
    deque<int> d;
    d.push_back(1); //{1}
    d.push_front(2); // {2,1}

    d.push_back(5); //{2,1,5}
    d.push_front(9); // {9,2,1,5}

    for (int i: d)
    {
        cout<<i<< " ";
    }
    cout<<endl;
    
    // d.pop_back(); //{9,2,1}
    // d.pop_front(); //{2,1}

    // for (int i: d)
    // {
    //     cout<<i<< " ";
    // }
    cout<<endl;

    
    cout<<"size of d--> "<<d.size()<<endl;

    cout<<"first element of d--> "<<d.front()<< endl;
    cout<<"last element of d--> "<<d.back()<<endl;

    cout<<"after deleting 3 and 4 index: "<<endl;
    d.erase(d.begin()+2, d.end()); //{9,2}

    for (int i: d)
    {
        cout<<i<< " ";
    }
    cout<<endl;
    
    cout<<"value of 1st index is: "<<d.at(0);




    return 0;
}
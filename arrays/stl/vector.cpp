#include<bits/stdc++.h>
using namespace std;

int main() {

    // <---- initilization, push_back(), capacity(), size(), at(), vector copy section ---->

    vector<int> v; // initialization of vector
    vector<int> a(5,2); // assign a vactor with size of 5 and every element it carry 2

    cout<<"capacity of a --> "<<a.capacity()<<" and size of a is: "<<a.size()<<endl;
    cout<<"value of 5th index of a is: "<<a.at(4)<<endl;
    cout<<"all value of a is: "<<endl;
    for (int i:a)
    {
        cout<<i<<" ";
    }
    cout<< endl;

    cout<<"all value of copy of a is: "<<endl;
    vector<int> copy_of_a(a); //copy all element of a to this new vector
    for (int i:copy_of_a)
    {
        cout<<i<<" ";
    }
    cout<< endl;
    

    cout<<"capacity of v --> "<<v.capacity()<<endl; // v.capacity to check the capacity

    v.push_back(1); //v.push_back() --> to assign a data to the vector;
    cout<<"capacity of v --> "<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"capacity of v --> "<<v.capacity()<<endl;

    v.push_back(7); 
    cout<<"capacity of v --> "<<v.capacity()<<endl; // now capacity incresed by 2 multi
    cout<<"size of v vector is --> "<<v.size()<<endl;

    cout<<"value of 2 position is: "<<v.at(2)<<endl<<endl;

    for (int i = 0; i < v.capacity(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<< endl;

    cout<<endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<< endl;

    // cout<<"value of 10 is : "<<v.at(10)<<endl; // will not work, out of range

    //<-------- front(), back(), pop_back(), clear() section -------->

    cout<<"front element is: "<<v.front()<<endl; // to access first index
    cout<<"back element is: "<<v.back()<<endl; // to access last index

    cout<<"before pop_back: "<<endl;
    cout<<"size of v: "<<v.size()<<" and capacity of v: "<<v.capacity()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<< endl;
    cout<<endl;

    v.pop_back(); // v.pop_back() it will remove the last element of v
    cout<<"after pop_back: "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<< endl;

    cout<<"size of v: "<<v.size()<<" and capacity of v: "<<v.capacity()<<endl;
    cout<<endl;
    
    cout<<"before clear: "<<endl;
    cout<<"size of v: "<<v.size()<<" and capacity of v: "<<v.capacity()<<endl;

    v.clear(); //v.clear() use to clear all element but capacity of v will be the same

    cout<<"after clear: "<<endl;
    cout<<"size of v: "<<v.size()<<" and capacity of v: "<<v.capacity()<<endl;

    
    

    return 0;
}

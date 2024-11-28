#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> input(5);

    for(int i=0; i<input.size(); i++){
        cin>>input[i];
    }

    cout<<"size of input is: "<<input.size()<<endl;
    cout<<"capacity of input is: "<<input.capacity()<<endl;

    for(int i:input)
    {
        cout<<i<<" ";
    }

    // for (int i = 0; i < input.size(); i++)
    // {
    //     cout<<input[i]<<" ";
    // }

    cout<<endl;

    input.push_back(66);
    input.push_back(25);

    cout<<"size of input is: "<<input.size()<<endl;
    cout<<"capacity of input is: "<<input.capacity()<<endl;

    for(int i:input)
    {
        cout<<i<<" ";
    }

    cout<<endl;
    input.pop_back();
    
    cout<<"size of input is: "<<input.size()<<endl;
    cout<<"capacity of input is: "<<input.capacity()<<endl;

    for(int i:input)
    {
        cout<<i<<" ";
    }
    


    return 0;
}
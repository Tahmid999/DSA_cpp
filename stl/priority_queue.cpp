#include<bits/stdc++.h>
using namespace std;

int main() {

    // max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue< int, vector<int>, greater<int> > mini;

    cout<<"max heap---> "<<endl;

    maxi.push(3);
    maxi.push(4);
    maxi.push(1);
    maxi.push(10);
    maxi.push(8);

    cout<<"size of maxi is: "<<maxi.size()<<endl;

    int n = maxi.size();

    for (int i = 0; i < n; i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    cout<<"after pop in every loop now size of maxi is: "<<maxi.size()<<endl;

    cout<<endl<<"now min heap---> "<<endl;
    
    mini.push(3);
    mini.push(4);
    mini.push(1);
    mini.push(10);
    mini.push(8);

    cout<<"size of mini is: "<<mini.size()<<endl;

    int m = mini.size();

    for (int i = 0; i < m; i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

    cout<<"after pop in every loop now size of mini is: "<<maxi.size()<<endl;

    return 0;
}
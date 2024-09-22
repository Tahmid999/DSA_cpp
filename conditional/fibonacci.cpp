#include<iostream>
using namespace std;

int main() {

    int n =10;
    int a = 0, b = 1;
    cout<<"" <<a<< " "<<b; 
    // for (int i = 1; i <= n; i++)
    // {
    //     int sum = a+b;
    //     cout<< " "<< sum;

    //     a = b;
    //     b = sum; 
    // }
    
    // for (int j = 0; j <= 5; j++)
    // {
    //     cout<<j<< "";
    //     j++;
    // }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            cout<<i<<" " <<j<<endl;
        }
        
    }
    
    

}
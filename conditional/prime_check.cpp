#include<iostream>
using namespace std;

int main() {

    int n,count=0;
    cin>>n;
    int i = 2;
    while(i<n)
    {
        if (n%i==0)
        {
            count = 1;
            break;
        }
        i++;
    }
    if (count == 1)
    {
        cout<< n << " is not a prime number" << endl;
    }
    else 
        cout<< n << " is a prime number" << endl;
    

    return 0;
}
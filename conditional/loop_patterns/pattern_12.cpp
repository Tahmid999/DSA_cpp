/*
A B C
B C D
C D E
*/

#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    int i =1;

    while (i<=n)
    {
        char ch = 'A' + i -1;
        int j=1;
        while (j<=n)
        {
            cout<< ch << " ";
            j++;
            ch++;
        }
        cout<<endl;
        i++; 
    }
    
    return 0;
}
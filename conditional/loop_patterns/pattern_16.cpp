/*
D
C D
B C D
A B C D
*/

#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int i =1;
    while (i<=n)
    {
        int j = 1;
        char ch = 'A'+n-i; //'D'- i +1;
        while (j<=i)
        {
            cout<< ch <<" ";
            j++;
            ch++;
        }
        cout<<endl;
        i++;
        
    }

    return 0;
}
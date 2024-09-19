/*
4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1
*/


#include<iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    // row
    int i = 1;
    while (i<=n)
    {
        // col
        int j = 1;
        while (j<=n)
        {
            cout<< n-j+1 << " ";
            j++;
        }
        cout<<endl;
        i++;
    }
    

    return 0;
}
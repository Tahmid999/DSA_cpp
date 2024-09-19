/*

1
2 1
3 2 1
4 3 2 1

*/


#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int i=1;

    // row
    while (i<=n)
    {
        //col
        int j =1;
        while (j<=i)
        {
            cout<< i-j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
        
    }
    

    return 0;
}
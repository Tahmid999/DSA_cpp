/*

1
2 3
3 4 5
4 5 6 7

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
            cout<< i+(j+1)-2<<" ";
            j++;
        }
        cout<<endl;
        i++;
        
    }
    

    return 0;
}
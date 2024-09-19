/* 
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 * * * * *
*/


#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int i = 1;

    // for row
    while (i<=n)
    {
        //for col
        int j = 1;
        while (j<=n)
        {
            cout<< "* ";
            
            j++; //for next col
        }

        cout<<endl;

        i++; //for next row
    }
    

    return 0;
}
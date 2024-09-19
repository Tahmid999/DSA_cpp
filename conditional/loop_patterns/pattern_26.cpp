/*

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

*/

#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    // half side
    for (int i = 1; i <= n; i++)
    {
        // 1st triangle
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }

        //space
        for (int k = 0; k != (2*(n-i)) ; k++)
        {
            cout<<" ";
        }

        // 2nd triangle
        for (int l = 1; l <= i; l++)
        {
            cout<<"*";
        }

        cout<<endl;
    }

    n++;

    // another half side
    for (int m = 1; m <= n; m++)
    {
        // 1st triangle
        for (int p = 1; p != n-m+1; p++)
        {
            cout<<"*";
        }

        // space
        for (int q = 0; q !=2*(m-1); q++)
        {
            cout<<" ";
        }
        
        // 2nd triangle
        for (int r = 1; r != (n-m+1); r++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    return 0;
}
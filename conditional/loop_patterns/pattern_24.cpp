/*
   1
  121
 12321
1234321 
*/


#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    //row
    int i=1;
    while (i<=n)
    {
        //space
        int space = n - i;
        while (space)
        {
            cout<<" ";
            space--;
        }

        // 1st triangle
        int j =1;
        while (j<=i)
        {
            cout<<j;
            j++;
        }

        // 2nd triangle
        int start = i-1;
        while (start)
        {
            cout<<start;
            start--;
        }
        cout<<endl;
        i++;
        
    }
    
    return 0;
}
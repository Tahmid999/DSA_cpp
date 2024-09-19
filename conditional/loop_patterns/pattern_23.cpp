/*
   1
  23
 456
78910   
*/

#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    //row
    int i=1;
    int count =1;
    while (i<=n)
    {
        //space
        int space = n-i;
        while (space)
        {
            cout<<" ";
            space--;
        }
        
        //col
        int j =1;

        while (j<=i)
        {
            cout<<count;
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
/*
1234
 234
  34
   4  
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
        int space = i-1;
        while (space)
        {
            cout<<" ";
            space--;
        }

        //col
        int j = n-i+1;
        int count = i;
        while (j)
        {
            cout<< count;
            j--;
            count++;
        }
        cout<<endl;
        i++;
    
    }

    return 0;
}
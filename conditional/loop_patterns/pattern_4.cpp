/*
1 2 3
4 5 6
7 8 9
*/


#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int i=1;
    int k =1; // for count

    // row
    while (i<=n)
    {
        //col
        int j =1;
        while (j<=n)
        {
            cout<< k <<" ";
            j++;
            k++;
        }
        cout<<endl;
        i++;
        
    }
    

    return 0;
}
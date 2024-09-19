/*
1
2 3
4 5 6
7 8 9 10
*/


#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int i=1;
    int count =1; // for count
    // row
    while (i<=n)
    {
        //col
        int j =1;
        while (j<=i)
        {
            cout<< count <<" ";
            j++;
            count++;
        }
        cout<<endl;
        i++;
        
    }
    

    return 0;
}
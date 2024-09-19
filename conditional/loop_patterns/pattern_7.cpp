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
        int count = i; 
        //col
        int j =1;
        while (j<=i)
        {
            cout<< j+1<<" ";
            j++;
            count++;
        }
        cout<<endl;
        i++;
        
    }
    

    return 0;
}
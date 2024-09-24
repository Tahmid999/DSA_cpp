#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    // cout<< "enter a decimal number: ";
    cin>>n;

    if (n==0)
    {
        cout<<1;
    }
    

    int ans = 0;
    int i =0;
    while (n!=0)
    {
        int bit = n & 1; // takeing bit

        // main formula
        ans = (bit * pow(10, i)) + ans; //storeing the bit
        n = n >> 1; // for next bit check
        i++;
    }
    
        cout<<ans;
    

    return 0;
}
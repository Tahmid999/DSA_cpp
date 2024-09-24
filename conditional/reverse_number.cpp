#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int ans = 0;
    
    for (int i = 0; n!= 0; i++)
    {
        // finding digit;
        int digit = n%10;
        // main formula
        ans = (ans * 10) + digit;
        n = n/10;
    }

    cout<< "Reverse is: " << ans;
    

    return 0;
}
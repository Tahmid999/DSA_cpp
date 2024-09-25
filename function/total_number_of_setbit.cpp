#include<iostream>
using namespace std;

int set_bit(int n){
    int count = 0;
    for (int i = 0; n!=0; i++)
    {
        int bit = n&1;
        if (bit==true)
        {
            count++;
        }
        n = n>>1;
    }
    return count;
}

int main() {
    int a,b;
    cin >> a >> b;

    cout<<"total set bit is: "<< set_bit(a) + set_bit(b);


    return 0;
}
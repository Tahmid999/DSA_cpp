#include<iostream>
using namespace std;

int main() {

    int a = 5, b=4;

    cout<<"a & b: "<<(a & b)<<endl;
    cout<<"a | b: "<<(a | b)<<endl;
    cout<<"~a: "<<~a<<endl;
    cout<<"a ^ b: "<<(a ^ b)<<endl;

    cout<<"a << 3: "<<(a << 3)<<endl; // left shift is multi by 2 (not for big num)
    cout<<"b >> 2: "<<(b >> 1)<<endl; // right shift is divide by 2 (not for big num)



    return 0;
}
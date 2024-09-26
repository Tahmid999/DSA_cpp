#include<iostream>
using namespace std;

int main() {
    // int arr[100] = {0}; // all element are init by 0

    // cout<<arr[10];

    // if i want to store 1 in all element then use loop

    int arr[100];
    for (int i = 0; i < 100; i++)
    {
        arr[i] = {1};
    }

    cout<< arr[16];
    
    return 0;
}

#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int sum = 0;
    int product = 1;
    int result;
    while (n!=0)
    {
        int digit = n%10;
        sum += digit;
        product *= digit;
        n = n/10;  
    }

    result =  - sum;
    cout<< result; 
    

    return 0;
}
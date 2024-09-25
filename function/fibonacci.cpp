#include<iostream>
using namespace std;

void fibo(int n){
    int a = 0;
    int b = 1;
    cout<< a << " " <<b;
    int fibonacci = 0;
    for (int i = 1; i <= n; i++)
    {
        fibonacci = a + b;
        cout<< " " << fibonacci;
        a = b;
        b = fibonacci;
    }
    
}

int main() {

    int n;
    cin>>n;
    fibo(n);

    return 0;
}

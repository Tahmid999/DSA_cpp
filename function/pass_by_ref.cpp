#include<iostream>
using namespace std;

void fun(int &n) {

    n++;
    cout<< n<< endl;;
}

int main() {
    int n;
    cin>> n;

    fun(n);
    cout<<n<<endl;

    return 0;
}
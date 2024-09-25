#include<iostream>
using namespace std;

int main() {
    int amount;
    cin >> amount;
    int tk_100, tk_50, tk_20, tk_10;

    switch (1)
    {
    case 1: tk_100 = amount/100;
            amount = amount%100;
            cout<<"numbar of 100 tk is: "<<tk_100<<endl;
    case 2: tk_50 = amount/50;
            amount = amount%50;
            cout<<"numbar of 50 tk is: "<<tk_50<<endl;
    case 3: tk_20 = amount/20;
            amount = amount%20;
            cout<<"numbar of 20 tk is: "<<tk_20<<endl;
    case 4: tk_10 = amount/10;
            amount = amount%10;
            cout<<"numbar of 10 tk is: "<<tk_10<<endl;
    
    }

    return 0;
}
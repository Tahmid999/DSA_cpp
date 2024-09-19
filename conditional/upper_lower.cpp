#include<iostream>
using namespace std;
int main() {

    char ch;
    // cin >> ch;
    ch = cin.get();

    if (ch >= 'A' && ch <= 'Z')
    {
        cout<< "Latter is uppercase"<<endl;
    }

    // i can compare with either char neithar ascii decimal value
    else if (ch >= 97 && ch <= 122)
    {
        cout<< "Latter is lowercase"<<endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout<< "Latter is number"<<endl;
    }
    else
    {
        cout<< "Latter is special char :-)"<<endl;
    }
    
    

    
    


    return 0;
}
#include<iostream>
using namespace std;

void linear_search(int arr[], int size, int n){
    bool get =0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==n)
        {
            cout<<"yes found at "<< i+1<<" position"<<endl;
            get = 1;
            break;
        }
    }
    // if (get==0)
    // {
    // }
        cout<<"not found"<<endl;
    
}

int main() {
    int num[10] = {50,4,8,9,7,28,63,10,49,55};

    int n;
    cout<<"which value are you want to search: ";
    cin>>n;

    linear_search(num, 10, n);
    return 0;
}
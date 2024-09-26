#include<iostream>
using namespace std;

void print_arr(int arr[], int size){
    cout<<"inside function"<<endl;
    arr[2] = 50;

    for (int i = 0; i < size; i++)
    {
        cout<<" "<<arr[i];
    }
    cout<< endl;

}

int main() {
    int arr[3] = {5,13,10};

    cout<< "inside main"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<" "<<arr[i];
    }
    cout<< endl;

    print_arr(arr, 3);

    cout<<"back again main"<< endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<" "<<arr[i];
    }
    cout<< endl;

    return 0;
}
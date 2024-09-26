#include<iostream>
using namespace std;

void sum_array(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = arr[i] + sum;
    }
    cout<< sum<< endl;
}

int main() {
    int size;
    cin>> size;
    int num[50];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    sum_array(num, size);

    return 0;
}
#include<iostream>
using namespace std;

int get_max(int arr[], int size) {

    int max_num = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        // pre define function

        max_num = max(max_num, arr[i]);

        // if (arr[i] > max_num)
        // {
        //     max_num = arr[i];
        // }
    }
    
    return max_num;
}

int get_min(int arr[], int size) {

    int min_num = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        // pre define function

        min_num = min(min_num, arr[i]);

        // if (arr[i] < min_num)
        // {
        //     min_num = arr[i];
        // }
    }
    
    return min_num;
}

int main() {
    int num[100];
    int size;
    cin>>size;
    // int num[size]; this is bad practice

    for (int  i = 0; i < size; i++)
    {
        cin>> num[i];
    }

    cout<< "your max num is: " << get_max(num, size) << endl;
    cout<< "your min num is: " << get_min(num, size) << endl;
    
    return 0;
}
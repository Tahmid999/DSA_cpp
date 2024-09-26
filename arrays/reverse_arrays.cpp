#include<bits/stdc++.h>
using namespace std;

void reverse_array(int arr[], int size){
    int start = 0;
    int end = size - 1;
    int temp = 0;
    while (start<=end)
    {
        // using inbuild swap function
        swap(arr[start] , arr[end]);
        
        // temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        start++;
        end--;
    }
}

void print_array(int arr[], int size){

    for (int i = 0; i < size; i++)
    {
        cout<< arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int num_even[6] = {5,9,7,2,-5,10};
    int num_odd[5] = {1,2,3,-8,6};

    reverse_array(num_even, 6);
    reverse_array(num_odd, 5);

    print_array(num_even, 6);
    print_array(num_odd, 5);

    return 0;
}

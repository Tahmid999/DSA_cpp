#include<bits/stdc++.h>
using namespace std;

void swap_alternate(int arr[], int size){
    int temp;
    // swaping
    for (int i = 0; i < size; i += 2)
    {
        int j = i+1;
        if(j<size)
        {   
            // with inbuild swap function
            // swap(arr[i], arr[j]);

            // without inbuild swap function
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // print
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i] << " ";
    }

    cout<<endl;
}

int main() {
    int num_even[6] = {3,2,4,8,5,9};
    int num_odd[5] = {5,9,4,6,7};

    swap_alternate(num_even, 6);
    swap_alternate(num_odd, 5);


    return 0;
}
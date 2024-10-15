#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int size, int key) {
    int start = 0;
    int end = size-1;

    /*
    not good practice to calculate mid by this way,
    because if start and end = 2^31-1, then mid will ovarflow
    2^31-1 + 2^31-1 == ovarflow of int variable
    */

    // int mid = (start+end)/2; 

    /*insted of we can calculate mid by this way,
    mid = start + ((end-start)/2)
        = start + end/2 - start/2
        = start/2 + end/2
        = (start+end)/2 
    */ 
    int mid = start + ((end-start)/2);

    while (start<=end)
    {
        if (arr[mid]==key)
        {
            return mid;
            // break;
        }

        //go to the right side
        if (arr[mid]<key)
        {
            start = mid + 1;
        }

        //go to the left side
        if (arr[mid]>key)
        {
            
            end = mid - 1;
        }
        
        // mid = (start+end)/2;
        mid = start + ((end-start)/2);
        
    }
    
    return -1;

}

int main() {
    int arr_even[8] = {2,3,5,7,10,15,22,25};
    int arr_odd[7] = {2,3,4,7,9,12,22};

    int index = binarysearch(arr_even, 8, 20);
    cout<< "20 found in: "<<index<<endl;

    int index2 = binarysearch(arr_odd, 7, 7);
    cout<< "7 found in: "<<index2<<endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

void sort_of_012(int *arr, int size){
    
    // 1st solution
    // for (int i = 0; i < size; i++)
    // {
    //     sort(arr,arr+size);
    // }
    
    int i = 0, j=0, k=size-1;

    while (j<=k)
    {
        if (arr[j]==0)
        {
            swap(arr[i],arr[j]);
            i++;
            j++;
        }

        else if (arr[j==1]) 
        {
            j++;
        }
        else if (arr[j]==2)
        {
            swap(arr[j],arr[k]);
            k--;
        }
        
    }
    


    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int arr1[8] ={0,1,0,2,1,2,1,0};
    int arr2[7] = {1,1,0,1,0,0,1};

    sort_of_012(arr1,8);
    sort_of_012(arr2,7);

    return 0;
}
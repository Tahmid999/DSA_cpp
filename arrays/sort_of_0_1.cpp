#include<bits/stdc++.h>
using namespace std;

void sort_of_01(int arr[], int size){
    int i=0, j=size-1;
    while(i<j){
        if (arr[i]==0)
        {
            i++;
        }
        else if (arr[j]==1) 
        {
            j--;
        }
        
        if(arr[i]!=0 && arr[j]!=1)
        {
            swap(arr[i],arr[j]);
            
            i++;
            j--;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int arr1[8] ={0,1,0,0,1,0,1,0};
    int arr2[7] = {1,1,0,1,0,0,1};

    sort_of_01(arr1,8);
    sort_of_01(arr2,7);

    return 0;
}
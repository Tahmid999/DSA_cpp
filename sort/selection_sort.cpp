#include <bits/stdc++.h> 
using namespace std;

void selectionSort(vector<int>& arr, int n)
{   
    
    for(int i=0; i<arr.size()-1; i++)
    {
        for(int j = i+1; j<arr.size(); j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

// or
void selectionSort_2(vector<int>& arr, int n)
{   
    
    for(int i=0; i<arr.size()-1; i++)
    {
        int minindx = i;
        for(int j = i+1; j<arr.size(); j++)
        {
            if(arr[j] < arr[minindx])
            {
                minindx = j;
            }
        }
        swap(arr[minindx], arr[i]);
    }
}

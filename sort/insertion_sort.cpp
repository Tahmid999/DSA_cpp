#include <bits/stdc++.h> 
using namespace std;
void insertionSort(int n, vector<int> &arr){
    // Write your code here.

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while (j>=0)
        {
            //shift
            if (arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        // compare finished then store the temp to the actual place. 
        // that's why use j+1
        arr[j+1] = temp;
    }
    
}


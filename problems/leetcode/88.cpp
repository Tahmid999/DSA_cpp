#include<bits/stdc++.h>
using namespace std;

void marge(int arr1[], int m, int arr2[], int n)
{
    vector<int> v;

    for (int i = 0; i < m; i++)
    {
        v.push_back(arr1[i]);
    }

    for (int j = 0; j < n; j++)
    {
        v.push_back(arr2[j]);
    }

    sort(v.begin(), v.end());

    for (int k = 0; k < v.size(); k++)
    {
        cout<<v[k]<<" ";
    }
    cout<<endl;
    
    
}

int main() {
    int arr1[] = {};
    int arr2[] = {1};

    marge(arr1, 0, arr2, 1);

    return 0;
}

// solution

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        vector<int> v;

        for(int i=0; i<m; i++)
        {
            v.push_back(nums1[i]);
        }
        for(int j=0; j<n; j++)
        {
            v.push_back(nums2[j]);
        }

        nums1.clear();
        for(int k=0; k<m+n; k++)
        {
            nums1.push_back(v[k]);
        }



        sort(nums1.begin(), nums1.end());

        // for (int k = 0; k < v.size(); k++)
        // {
        //     cout<<v[k]<<" ";
        // }
        // cout<<endl;
    }
};
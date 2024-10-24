#include<bits/stdc++.h>
using namespace std;


bool isvalid(int arr[],int n, long long int m, int mid)
{

    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]-mid>0)
        {
            sum = sum + (arr[i]-mid);
        }
    }
    if (sum>=m)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int binary(int arr[], int n, long long int m)
{
    //we can use sort function

    int maxi = -1;

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    
    int s = 0;
    int e = maxi;
    int mid = s + (e-s)/2;
    long long int ans = -1;

    while(s<=e)
    {
        
        if(isvalid(arr,n,m,mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
            
        mid = s + (e-s)/2;
    }

    return ans;
}

int main() {
	int arr[1000000];
    int n;
    long long int m;
    
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<binary(arr,n,m);


    return 0;
}
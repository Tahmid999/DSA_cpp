#include<bits/stdc++.h>
using namespace std;

long long int sqrt_with_bs(int n){

    if (n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    
    int s = 0;
    int e = n;
    long long int mid = s + (e-s)/2;
    long long int ans = -1;

    while (s<=e)
    {
        long long int res = mid * mid;
        if (res == n)
        {
            return mid;
        }
        if (res < n)
        {
            s = mid + 1;
            ans = mid;
        }
        else 
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

double with_factor(int n, int factor, int tempans){
    double fraction = 1;
    double ans = tempans;
    for (int i = 0; i < factor; i++)
    {
        fraction = fraction/10;
        for (double j = ans; j*j < n; j = j + fraction)
        {
            ans = j;
        }
    }
    return ans;
}

int main() {
    int n;
    cout<<"enter a number: ";
    cin>>n;

    int tempans = sqrt_with_bs(n);
    cout<< "ans is: "<<with_factor(n, 4 , tempans)<<endl;

    return 0;
}
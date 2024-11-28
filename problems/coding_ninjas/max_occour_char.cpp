#include<bits/stdc++.h>
using namespace std;

char max_occ_ch(string s)
{
    int arr[26] = {0};

    // letter counting
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        int count = 0;
        count = ch - 'a';
        arr[count]++;
    }

    // max occour counting
    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
        
    }

    return ans + 'a';
    
    
}

int main() {
    string s;
    cin>>s;

    cout<<max_occ_ch(s)<<endl;

    return 0;
}
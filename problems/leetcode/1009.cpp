#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cin >>n; 
    int ans = 0;

    int i = 0;
    while(n!=0){
        int bit = (n & 1);
        int compliment = bit ^ 1;
        if(compliment==1){
            ans = (pow(2, i)) + ans;
        }
        n = n >> 1;
        i++;
    }
    cout<< ans;

    return 0;
}
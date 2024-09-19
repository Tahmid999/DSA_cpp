/* dabangg pattern

1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

*/

#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    // row
    int i =1;
    while(i<=n){

        //1st triangle (number)
        int j =n-i+1;
        int count_1 = 1;
        while (j)
        {
            cout<< count_1 <<" ";
            j--;
            count_1++;
        }

        /*
            // 2nd triangle (star)
            int k = i-1;
            while(k){
                cout<< "* ";
                k--;
            }
        */
        
        /*
            // 3rd triangle (star)
            int l = i-1;
            while(l){
               cout<< "* ";
               l--;
            }
        */

        // 2nd and 3rd triangle in one loop
        int p = 2*(i-1);
        while(p){
            cout<<"* ";
            p--;
        }

        // 4rt triangle (number_revarse)
        int m = n -i+1;
        int count_2 = m;
        while (m)
        {
            cout<< count_2 << " ";
            m--;
            count_2--;
        }

        // next row
        cout<<endl;
        i++;

    }


    return 0;
}
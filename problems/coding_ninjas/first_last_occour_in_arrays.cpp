/*
Problem statement
You have been given a sorted array/list 'arr' consisting of ‘n’ 
elements. You are also given an integer ‘k’.
Now, your task is to find the first and last occurrence of 
‘k’ in 'arr'.

Note :
1. If ‘k’ is not present in the array, then the first and the last occurrence will be -1. 
2. 'arr' may contain duplicate elements.

Example:
Input: 'arr' = [0,1,1,5] , 'k' = 1

Output: 1 2

Explanation:
If 'arr' = [0, 1, 1, 5] and 'k' = 1, then the first and last occurrence of 1 will be 1(0 - indexed) and 2.

Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
8 2
0 0 1 1 2 2 2 2

Sample output 1:
4 7

Explanation of Sample output 1:
For this testcase the first occurrence of 2 in at index 4 and last occurrence is at index 7.

Sample Input 2:
4 2
1 3 3 5

Sample output 2:
-1 -1

Expected Time Complexity:
Try to do this in O(log(n)).

Constraints:
1 <= n <= 10^5
0 <= k <= 10^9
0 <= arr[i] <= 10^9

Time Limit : 1 second
*/

#include <bits/stdc++.h>
int firstocc(vector<int>& arr, int n, int k) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e) {
        if(arr[mid]==k){
            ans = mid;

            //checking left, in case if in left side have first occ..
            e = mid - 1;
        }

        //go to the right
        else if(arr[mid]<k) {
            s = mid + 1;
        }

        //go to the left
        else if (arr[mid]>k) {
            e = mid - 1;
        }

        mid = s + (e-s)/2; 
    }

    return ans;
}

int lastocc(vector<int>& arr, int n, int k) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e) {
        if(arr[mid]==k){
            ans = mid;

            //checking 1 step right, in case if 1 step after 
            //have last occ..
            s = mid + 1;
        }

        //go to the right
        else if(arr[mid]<k) {
            s = mid + 1;
        }

        //go to the left
        else if (arr[mid]>k) {
            e = mid - 1;
        }

        mid = s + (e-s)/2; 
    }

    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int, int> p;
    p.first = firstocc(arr, n, k);
    p.second = lastocc(arr, n, k);
    return p;
    
}
/*
Problem statement
You have been given a sorted array/list of integers 'arr' of size 'n' 
and an integer 'x'.

Find the total number of occurrences of 'x' in the array/list.

Example:
Input: 'n' = 7, 'x' = 3
'arr' = [1, 1, 1, 2, 2, 3, 3]

Output: 2

Explanation: Total occurrences of '3' in the array 'arr' is 2.

Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
7 3
1 1 1 2 2 3 3

Sample Output 1:
2

Explanation For Sample Input 1:
In the given list, there are 2 occurrences of integer 3.

Sample Input 2:
 5 6
 1 2 4 4 5

Sample Output 2:
 0

Explanation For Sample Input 2:
In the given list, there are 0 occurrences of integer 6.

Expected time complexity:
The expected time complexity is O(log 'n').

Constraints:
1 <= n <= 10^4
1 <= arr[i] <= 10^9
1 <= x <= 10^9
Where arr[i] represents the element i-th element in the array/list.

Time Limit: 1sec
*/

// using binary search
#include <bits/stdc++.h>
int firstocc(vector<int>& arr, int n, int x){
	int s = 0;
	int e = n-1;
	int mid = s + (e-s)/2;
	int ans = 0;

	while(s<=e) {
		if(arr[mid]==x){
			ans = mid;
			e = mid - 1;
		}
		else if(arr[mid]<x){
			s = mid + 1;
		}
		else if(arr[mid]>x){
			e = mid - 1;
		}
		mid = s + (e-s)/2;
	}

	return ans;
}

int lastocc(vector<int>& arr, int n, int x){
	int s = 0;
	int e = n-1;
	int mid = s + (e-s)/2;
	int ans = -1;

	while(s<=e) {
		if(arr[mid]==x){
			ans = mid;
			s = mid + 1;
		}
		else if(arr[mid]<x){
			s = mid + 1;
		}
		else if(arr[mid]>x){
			e = mid - 1;
		}
		mid = s + (e-s)/2;
	}

	return ans;
}


int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	int res;
	res = (lastocc(arr, n, x) - firstocc(arr, n, x)) + 1;
	return res;
}

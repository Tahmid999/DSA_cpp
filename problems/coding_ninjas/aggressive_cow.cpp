/*
Problem statement
You are given an array 'arr' consisting of 'n' integers which denote 
the position of a stall.

You are also given an integer 'k' which denotes the number of 
aggressive cows.

You are given the task of assigning stalls to 'k' cows such that the 
minimum distance between any two of them is the maximum possible.
Print the maximum possible minimum distance.

Example:
Input: 'n' = 3, 'k' = 2 and 'arr' = {1, 2, 3}
Output: 2

Explanation: The maximum possible minimum distance will be 2 when 2 cows are placed at positions {1, 3}. Here distance between cows is 2.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
6 4
0 3 4 7 10 9
Sample Output 1 :
3

Explanation to Sample Input 1 :
The maximum possible minimum distance between any two cows will be 3 when 4 cows are placed at positions {0, 3, 7, 10}. Here distance between cows are 3, 4 and 3 respectively.

Sample Input 2 :
5 2
4 2 1 3 6
Sample Output 2 :
5

Expected time complexity:
Can you solve this in O(n * log(n)) time complexity?
Constraints :
2 <= 'n' <= 10 ^ 5
2 <= 'k' <= n
0 <= 'arr[i]' <= 10 ^ 9
Time Limit: 1 sec.
*/

bool isvalid(vector<int> &arr, int k, int mid)
{
    int cow = 1;
    int position = arr[0];
    for(int i = 0; i<arr.size(); i++)
    {
        // why >=, cause if in 2 position distance cow don't conflict then
        // it's obiously not conflict with greter then 2 like 3,4 etc.
        if(arr[i] - position >= mid)  
        {
            cow++;
            if(cow==k)
            {
                return true;
            }
            position = arr[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(), stalls.end());

    int s = 0;
    int maxi = -1;
    int ans;
    for(int i = 0; i<stalls.size(); i++)
    {
        maxi = max(maxi, stalls[i]);
    }
    int e = maxi;
    int mid = s + (e-s)/2;

    while(s<=e)
    {
        if(isvalid(stalls, k, mid))
        {
            ans = mid;
            // because we need to Print the maximum possible minimum distance.
            // means largest possible distance
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

/*
A phrase is a palindrome if, after converting all uppercase letters into 
lowercase letters and removing all non-alphanumeric characters, it reads the 
same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
 

Constraints:
1 <= s.length <= 2 * 105
s consists only of printable ASCII characters.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validchar(char ch)
    {
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        {
            return true;
        }

        return false;
    }

    char tolowercase(char ch)
    {
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        {
            return ch;
        }
        else
        {
            char temp_ch = ch - 'A' + 'a';
            return temp_ch;
        }
    }

    bool isPalindrome(string s) {

        string temp;

        // remove special char
        for(int i=0; i<s.size(); i++)
        {
            if(validchar(s[i]))
            {
                temp.push_back(s[i]);
            }
        }

        // make all char to lowercase
        for(int i=0; i<temp.size(); i++)
        {
            temp[i] = tolowercase(temp[i]);
        }
        
        // checking palindrome or not
        int st =0;
        int end = temp.size()-1;

        while(st<end)
        {
            if(temp[st] != temp[end])
            {
                return false;
            }
            else
            {
                st++;
                end--;
            }
        }
        return true;

    }
};

int main() {


    return 0;
}

/*
Problem statement
You are given a string 'S'. Your task is to check whether the string is palindrome 
or not. For checking palindrome, consider alphabets and numbers only and ignore the 
symbols and whitespaces.

Note :
String 'S' is NOT case sensitive.

Example :
Let S = “c1 O$d@eeD o1c”.
If we ignore the special characters, whitespaces and convert all uppercase letters 
to lowercase, we get S = “c1odeedo1c”, which is a palindrome. Hence, the given string 
is also a palindrome.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= T <= 100 
1 <= Length(S) <= 10^4

Where 'T' denotes the number of test cases and 'S' denotes the given string.

Time Limit : 1 sec
Sample Input 1 :
2
N2 i&nJA?a& jnI2n
A1b22Ba
Sample Output 1 :
Yes
No
Explanation 1 :
For the first test case, S = “N2 i&nJA?a& jnI2n”. If we ignore the special characters,
 whitespaces and convert all uppercase letters to lowercase, we get S = “n2injaajni2n”,
  which is a palindrome. Hence, the given string is also a palindrome.

For the second test case, S = “A1b22Ba”. If we ignore the special characters, whitespaces
 and convert all uppercase letters to lowercase, we get S = “a1b22ba”, which is not
  a palindrome. Hence, the given string is not a palindrome.

Sample Input 2 :
3
codingninjassajNiNgNidoc
5?36@6?35
aaBBa@
Sample Output 2 :
Yes
Yes
No
*/

#include <bits/stdc++.h> 
using namespace std;

bool valid_char(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return true;
    }

    return false;
}

char lower(char ch)
{
    if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkpalindrom(string a)
{
    int s = 0;
    int e = a.size()-1;

    while(s<e)
    {
        if(a[s] != a[e])
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}

bool checkPalindrome(string s)
{
    // Write your code here.
    
    string temp;

    // remove special charecter
    for(int i=0; i<s.size(); i++)
    {
        if(valid_char(s[i])){
            temp.push_back(s[i]);
        }
    }

    // make all char to lowercase
    for(int i=0; i< temp.size(); i++)
    {
        temp[i] = lower(temp[i]);
    }

    // checking pailindrome

    return checkpalindrom(temp);

}
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
void isPalindrome(string str)
{
    int l = 0;
    int h = str.length() - 1;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            cout << str << " is not a palindrome" << endl;
            return;
        }
    }
    cout << str << " is a palindrome" << endl;
}
int main()
{

    string str = "madam";
    isPalindrome(str);
    return 0;
}
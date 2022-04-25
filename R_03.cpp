// write a program to count the vowel of given string
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
           s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            cnt ++;
        }
    }
    cout << cnt << endl;

    return 0;
}


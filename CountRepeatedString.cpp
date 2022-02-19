#include <iostream>
#include <bits/stdc++.h>
using namespace std;
char maxRepeated(string s)
{
    int l = s.length();
    int count = 0;
    int res = s[0];
    for (int i = 0; i < l; i++)
    {
        int cur_count = 1;
        for (int j = i + 1; j < l; j++)
        {
            if (s[i] != s[j])
                break;
            cur_count++;
        }
        if (cur_count > count)
        {
            count = cur_count;
            res = s[i];
        }
    }
    return res;
}
int main()
{
    string s = "aabbbbbcccdeef";
    cout << "Maximum Repeating Character of the String : "
         << " ";
    cout << maxRepeated(s);
    cout << endl;
    return 0;
}
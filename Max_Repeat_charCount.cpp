#include <iostream>
#include <bits/stdc++.h>
using namespace std;
char maxChar(string s)
{
    int len = s.size();
    int cnt = 0;
    //int curr_cnt = 1;
    char res = s[0];
    for(int i = 0; i < len; i++)
    {
        int curr_cnt = 1;
        for(int j = i+1; j < len; j++)
        {
            if(s[i] != s[j])
                break;
            else
                curr_cnt ++;
        }
        if(curr_cnt > cnt)
        {
            cnt = curr_cnt;
            res = s[i];
        }
    }
    return res;
}
int main()
{
    string s = "geeekks";
    cout << maxChar(s) << endl;
    return 0;
}

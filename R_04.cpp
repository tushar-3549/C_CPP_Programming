// write a program concatenation two strings using dynamic memory allocation
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
char *string_append(char *s1,char *s2)
{
    int s1_len = strlen(s1);
    int s2_len = strlen(s2);
    int size = s1_len + s2_len + 1;
    char *s = (char *)calloc(size, sizeof(char));

    for(int i = 0; i < s1_len; i++)
    {
        s[i] = s1[i];
    }
    for(int i = 0; i < s2_len; i++)
    {
        s[s1_len + i] = s2[i];
    }
    s[size - 1] = '\0';

    return s;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    char s1[100];
    cin >> s1;
    char s2[100];
    cin >> s2;
    char *s = string_append(s1,s2);
    cout << "Concatenation String : " << s << endl;
    free(s);

    return 0;
}
